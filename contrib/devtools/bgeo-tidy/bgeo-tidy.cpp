// Copyright (c) 2023 Bitcoin Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "logprintf.h"
#include "nontrivial-threadlocal.h"

#include <clang-tidy/ClangTidyModule.h>
#include <clang-tidy/ClangTidyModuleRegistry.h>

class BgeoModule final : public clang::tidy::ClangTidyModule
{
public:
    void addCheckFactories(clang::tidy::ClangTidyCheckFactories& CheckFactories) override
    {
        CheckFactories.registerCheck<bgeo::LogPrintfCheck>("bgeo-unterminated-logprintf");
        CheckFactories.registerCheck<bgeo::NonTrivialThreadLocal>("bgeo-nontrivial-threadlocal");
    }
};

static clang::tidy::ClangTidyModuleRegistry::Add<BgeoModule>
    X("bgeo-module", "Adds bgeo checks.");

volatile int BgeoModuleAnchorSource = 0;
