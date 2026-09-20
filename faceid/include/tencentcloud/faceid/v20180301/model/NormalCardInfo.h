/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALCARDINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALCARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/NormalHKIDCard.h>
#include <tencentcloud/faceid/v20180301/model/NormalMLIDCard.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesVoteID.h>
#include <tencentcloud/faceid/v20180301/model/NormalIndonesiaIDCard.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesDrivingLicense.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesTinID.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesSSSID.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesUMID.h>
#include <tencentcloud/faceid/v20180301/model/InternationalIDPassport.h>
#include <tencentcloud/faceid/v20180301/model/GeneralCard.h>
#include <tencentcloud/faceid/v20180301/model/IndonesiaDrivingLicense.h>
#include <tencentcloud/faceid/v20180301/model/NormalThailandIDCard.h>
#include <tencentcloud/faceid/v20180301/model/SingaporeIDCard.h>
#include <tencentcloud/faceid/v20180301/model/MacaoIDCard.h>
#include <tencentcloud/faceid/v20180301/model/MainlandIDCard.h>
#include <tencentcloud/faceid/v20180301/model/JapanIDCard.h>
#include <tencentcloud/faceid/v20180301/model/TaiWanIDCard.h>
#include <tencentcloud/faceid/v20180301/model/HMTPermit.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Document recognition result (mapped field result)
                */
                class NormalCardInfo : public AbstractModel
                {
                public:
                    NormalCardInfo();
                    ~NormalCardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hong Kong identity card
                     * @return HKIDCard Hong Kong identity card
                     * 
                     */
                    NormalHKIDCard GetHKIDCard() const;

                    /**
                     * 设置Hong Kong identity card
                     * @param _hKIDCard Hong Kong identity card
                     * 
                     */
                    void SetHKIDCard(const NormalHKIDCard& _hKIDCard);

                    /**
                     * 判断参数 HKIDCard 是否已赋值
                     * @return HKIDCard 是否已赋值
                     * 
                     */
                    bool HKIDCardHasBeenSet() const;

                    /**
                     * 获取Malaysian identity card
                     * @return MLIDCard Malaysian identity card
                     * 
                     */
                    NormalMLIDCard GetMLIDCard() const;

                    /**
                     * 设置Malaysian identity card
                     * @param _mLIDCard Malaysian identity card
                     * 
                     */
                    void SetMLIDCard(const NormalMLIDCard& _mLIDCard);

                    /**
                     * 判断参数 MLIDCard 是否已赋值
                     * @return MLIDCard 是否已赋值
                     * 
                     */
                    bool MLIDCardHasBeenSet() const;

                    /**
                     * 获取Philippines voter card
                     * @return PhilippinesVoteID Philippines voter card
                     * 
                     */
                    PhilippinesVoteID GetPhilippinesVoteID() const;

                    /**
                     * 设置Philippines voter card
                     * @param _philippinesVoteID Philippines voter card
                     * 
                     */
                    void SetPhilippinesVoteID(const PhilippinesVoteID& _philippinesVoteID);

                    /**
                     * 判断参数 PhilippinesVoteID 是否已赋值
                     * @return PhilippinesVoteID 是否已赋值
                     * 
                     */
                    bool PhilippinesVoteIDHasBeenSet() const;

                    /**
                     * 获取Indonesian Identity Card
                     * @return IndonesiaIDCard Indonesian Identity Card
                     * 
                     */
                    NormalIndonesiaIDCard GetIndonesiaIDCard() const;

                    /**
                     * 设置Indonesian Identity Card
                     * @param _indonesiaIDCard Indonesian Identity Card
                     * 
                     */
                    void SetIndonesiaIDCard(const NormalIndonesiaIDCard& _indonesiaIDCard);

                    /**
                     * 判断参数 IndonesiaIDCard 是否已赋值
                     * @return IndonesiaIDCard 是否已赋值
                     * 
                     */
                    bool IndonesiaIDCardHasBeenSet() const;

                    /**
                     * 获取Philippines driving license
                     * @return PhilippinesDrivingLicense Philippines driving license
                     * 
                     */
                    PhilippinesDrivingLicense GetPhilippinesDrivingLicense() const;

                    /**
                     * 设置Philippines driving license
                     * @param _philippinesDrivingLicense Philippines driving license
                     * 
                     */
                    void SetPhilippinesDrivingLicense(const PhilippinesDrivingLicense& _philippinesDrivingLicense);

                    /**
                     * 判断参数 PhilippinesDrivingLicense 是否已赋值
                     * @return PhilippinesDrivingLicense 是否已赋值
                     * 
                     */
                    bool PhilippinesDrivingLicenseHasBeenSet() const;

                    /**
                     * 获取Philippines TinID
                     * @return PhilippinesTinID Philippines TinID
                     * 
                     */
                    PhilippinesTinID GetPhilippinesTinID() const;

                    /**
                     * 设置Philippines TinID
                     * @param _philippinesTinID Philippines TinID
                     * 
                     */
                    void SetPhilippinesTinID(const PhilippinesTinID& _philippinesTinID);

                    /**
                     * 判断参数 PhilippinesTinID 是否已赋值
                     * @return PhilippinesTinID 是否已赋值
                     * 
                     */
                    bool PhilippinesTinIDHasBeenSet() const;

                    /**
                     * 获取Philippines SSSID
                     * @return PhilippinesSSSID Philippines SSSID
                     * 
                     */
                    PhilippinesSSSID GetPhilippinesSSSID() const;

                    /**
                     * 设置Philippines SSSID
                     * @param _philippinesSSSID Philippines SSSID
                     * 
                     */
                    void SetPhilippinesSSSID(const PhilippinesSSSID& _philippinesSSSID);

                    /**
                     * 判断参数 PhilippinesSSSID 是否已赋值
                     * @return PhilippinesSSSID 是否已赋值
                     * 
                     */
                    bool PhilippinesSSSIDHasBeenSet() const;

                    /**
                     * 获取Philippines UMID
                     * @return PhilippinesUMID Philippines UMID
                     * 
                     */
                    PhilippinesUMID GetPhilippinesUMID() const;

                    /**
                     * 设置Philippines UMID
                     * @param _philippinesUMID Philippines UMID
                     * 
                     */
                    void SetPhilippinesUMID(const PhilippinesUMID& _philippinesUMID);

                    /**
                     * 判断参数 PhilippinesUMID 是否已赋值
                     * @return PhilippinesUMID 是否已赋值
                     * 
                     */
                    bool PhilippinesUMIDHasBeenSet() const;

                    /**
                     * 获取Hong Kong, Macao, and Taiwan region as well as overseas passport
                     * @return InternationalIDPassport Hong Kong, Macao, and Taiwan region as well as overseas passport
                     * 
                     */
                    InternationalIDPassport GetInternationalIDPassport() const;

                    /**
                     * 设置Hong Kong, Macao, and Taiwan region as well as overseas passport
                     * @param _internationalIDPassport Hong Kong, Macao, and Taiwan region as well as overseas passport
                     * 
                     */
                    void SetInternationalIDPassport(const InternationalIDPassport& _internationalIDPassport);

                    /**
                     * 判断参数 InternationalIDPassport 是否已赋值
                     * @return InternationalIDPassport 是否已赋值
                     * 
                     */
                    bool InternationalIDPassportHasBeenSet() const;

                    /**
                     * 获取General card certificate information
                     * @return GeneralCard General card certificate information
                     * 
                     */
                    GeneralCard GetGeneralCard() const;

                    /**
                     * 设置General card certificate information
                     * @param _generalCard General card certificate information
                     * 
                     */
                    void SetGeneralCard(const GeneralCard& _generalCard);

                    /**
                     * 判断参数 GeneralCard 是否已赋值
                     * @return GeneralCard 是否已赋值
                     * 
                     */
                    bool GeneralCardHasBeenSet() const;

                    /**
                     * 获取Indonesian driving license
                     * @return IndonesiaDrivingLicense Indonesian driving license
                     * 
                     */
                    IndonesiaDrivingLicense GetIndonesiaDrivingLicense() const;

                    /**
                     * 设置Indonesian driving license
                     * @param _indonesiaDrivingLicense Indonesian driving license
                     * 
                     */
                    void SetIndonesiaDrivingLicense(const IndonesiaDrivingLicense& _indonesiaDrivingLicense);

                    /**
                     * 判断参数 IndonesiaDrivingLicense 是否已赋值
                     * @return IndonesiaDrivingLicense 是否已赋值
                     * 
                     */
                    bool IndonesiaDrivingLicenseHasBeenSet() const;

                    /**
                     * 获取Thai Identity Card
                     * @return ThailandIDCard Thai Identity Card
                     * 
                     */
                    NormalThailandIDCard GetThailandIDCard() const;

                    /**
                     * 设置Thai Identity Card
                     * @param _thailandIDCard Thai Identity Card
                     * 
                     */
                    void SetThailandIDCard(const NormalThailandIDCard& _thailandIDCard);

                    /**
                     * 判断参数 ThailandIDCard 是否已赋值
                     * @return ThailandIDCard 是否已赋值
                     * 
                     */
                    bool ThailandIDCardHasBeenSet() const;

                    /**
                     * 获取Singapore ID card
                     * @return SingaporeIDCard Singapore ID card
                     * 
                     */
                    SingaporeIDCard GetSingaporeIDCard() const;

                    /**
                     * 设置Singapore ID card
                     * @param _singaporeIDCard Singapore ID card
                     * 
                     */
                    void SetSingaporeIDCard(const SingaporeIDCard& _singaporeIDCard);

                    /**
                     * 判断参数 SingaporeIDCard 是否已赋值
                     * @return SingaporeIDCard 是否已赋值
                     * 
                     */
                    bool SingaporeIDCardHasBeenSet() const;

                    /**
                     * 获取Macao identity card
                     * @return MacaoIDCard Macao identity card
                     * 
                     */
                    MacaoIDCard GetMacaoIDCard() const;

                    /**
                     * 设置Macao identity card
                     * @param _macaoIDCard Macao identity card
                     * 
                     */
                    void SetMacaoIDCard(const MacaoIDCard& _macaoIDCard);

                    /**
                     * 判断参数 MacaoIDCard 是否已赋值
                     * @return MacaoIDCard 是否已赋值
                     * 
                     */
                    bool MacaoIDCardHasBeenSet() const;

                    /**
                     * 获取Mainland ID card
                     * @return MainlandIDCard Mainland ID card
                     * 
                     */
                    MainlandIDCard GetMainlandIDCard() const;

                    /**
                     * 设置Mainland ID card
                     * @param _mainlandIDCard Mainland ID card
                     * 
                     */
                    void SetMainlandIDCard(const MainlandIDCard& _mainlandIDCard);

                    /**
                     * 判断参数 MainlandIDCard 是否已赋值
                     * @return MainlandIDCard 是否已赋值
                     * 
                     */
                    bool MainlandIDCardHasBeenSet() const;

                    /**
                     * 获取Japan identity card
                     * @return JapanIDCard Japan identity card
                     * 
                     */
                    JapanIDCard GetJapanIDCard() const;

                    /**
                     * 设置Japan identity card
                     * @param _japanIDCard Japan identity card
                     * 
                     */
                    void SetJapanIDCard(const JapanIDCard& _japanIDCard);

                    /**
                     * 判断参数 JapanIDCard 是否已赋值
                     * @return JapanIDCard 是否已赋值
                     * 
                     */
                    bool JapanIDCardHasBeenSet() const;

                    /**
                     * 获取Taiwan (China) identity card
                     * @return TaiWanIDCard Taiwan (China) identity card
                     * 
                     */
                    TaiWanIDCard GetTaiWanIDCard() const;

                    /**
                     * 设置Taiwan (China) identity card
                     * @param _taiWanIDCard Taiwan (China) identity card
                     * 
                     */
                    void SetTaiWanIDCard(const TaiWanIDCard& _taiWanIDCard);

                    /**
                     * 判断参数 TaiWanIDCard 是否已赋值
                     * @return TaiWanIDCard 是否已赋值
                     * 
                     */
                    bool TaiWanIDCardHasBeenSet() const;

                    /**
                     * 获取Hong Kong, Macau and Taiwan Travel Permit
                     * @return HMTPermitCard Hong Kong, Macau and Taiwan Travel Permit
                     * 
                     */
                    HMTPermit GetHMTPermitCard() const;

                    /**
                     * 设置Hong Kong, Macau and Taiwan Travel Permit
                     * @param _hMTPermitCard Hong Kong, Macau and Taiwan Travel Permit
                     * 
                     */
                    void SetHMTPermitCard(const HMTPermit& _hMTPermitCard);

                    /**
                     * 判断参数 HMTPermitCard 是否已赋值
                     * @return HMTPermitCard 是否已赋值
                     * 
                     */
                    bool HMTPermitCardHasBeenSet() const;

                private:

                    /**
                     * Hong Kong identity card
                     */
                    NormalHKIDCard m_hKIDCard;
                    bool m_hKIDCardHasBeenSet;

                    /**
                     * Malaysian identity card
                     */
                    NormalMLIDCard m_mLIDCard;
                    bool m_mLIDCardHasBeenSet;

                    /**
                     * Philippines voter card
                     */
                    PhilippinesVoteID m_philippinesVoteID;
                    bool m_philippinesVoteIDHasBeenSet;

                    /**
                     * Indonesian Identity Card
                     */
                    NormalIndonesiaIDCard m_indonesiaIDCard;
                    bool m_indonesiaIDCardHasBeenSet;

                    /**
                     * Philippines driving license
                     */
                    PhilippinesDrivingLicense m_philippinesDrivingLicense;
                    bool m_philippinesDrivingLicenseHasBeenSet;

                    /**
                     * Philippines TinID
                     */
                    PhilippinesTinID m_philippinesTinID;
                    bool m_philippinesTinIDHasBeenSet;

                    /**
                     * Philippines SSSID
                     */
                    PhilippinesSSSID m_philippinesSSSID;
                    bool m_philippinesSSSIDHasBeenSet;

                    /**
                     * Philippines UMID
                     */
                    PhilippinesUMID m_philippinesUMID;
                    bool m_philippinesUMIDHasBeenSet;

                    /**
                     * Hong Kong, Macao, and Taiwan region as well as overseas passport
                     */
                    InternationalIDPassport m_internationalIDPassport;
                    bool m_internationalIDPassportHasBeenSet;

                    /**
                     * General card certificate information
                     */
                    GeneralCard m_generalCard;
                    bool m_generalCardHasBeenSet;

                    /**
                     * Indonesian driving license
                     */
                    IndonesiaDrivingLicense m_indonesiaDrivingLicense;
                    bool m_indonesiaDrivingLicenseHasBeenSet;

                    /**
                     * Thai Identity Card
                     */
                    NormalThailandIDCard m_thailandIDCard;
                    bool m_thailandIDCardHasBeenSet;

                    /**
                     * Singapore ID card
                     */
                    SingaporeIDCard m_singaporeIDCard;
                    bool m_singaporeIDCardHasBeenSet;

                    /**
                     * Macao identity card
                     */
                    MacaoIDCard m_macaoIDCard;
                    bool m_macaoIDCardHasBeenSet;

                    /**
                     * Mainland ID card
                     */
                    MainlandIDCard m_mainlandIDCard;
                    bool m_mainlandIDCardHasBeenSet;

                    /**
                     * Japan identity card
                     */
                    JapanIDCard m_japanIDCard;
                    bool m_japanIDCardHasBeenSet;

                    /**
                     * Taiwan (China) identity card
                     */
                    TaiWanIDCard m_taiWanIDCard;
                    bool m_taiWanIDCardHasBeenSet;

                    /**
                     * Hong Kong, Macau and Taiwan Travel Permit
                     */
                    HMTPermit m_hMTPermitCard;
                    bool m_hMTPermitCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_NORMALCARDINFO_H_
