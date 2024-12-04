// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BGEO_QT_BGEOADDRESSVALIDATOR_H
#define BGEO_QT_BGEOADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BgeoAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BgeoAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Bgeo address widget validator, checks for a valid bgeo address.
 */
class BgeoAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BgeoAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // BGEO_QT_BGEOADDRESSVALIDATOR_H
