/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CARDINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/HKIDCard.h>
#include <tencentcloud/faceid/v20180301/model/MLIDCard.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesVoteID.h>
#include <tencentcloud/faceid/v20180301/model/IndonesiaIDCard.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesDrivingLicense.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesTinID.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesSSSID.h>
#include <tencentcloud/faceid/v20180301/model/PhilippinesUMID.h>
#include <tencentcloud/faceid/v20180301/model/InternationalIDPassport.h>
#include <tencentcloud/faceid/v20180301/model/GeneralCard.h>
#include <tencentcloud/faceid/v20180301/model/IndonesiaDrivingLicense.h>
#include <tencentcloud/faceid/v20180301/model/ThailandIDCard.h>
#include <tencentcloud/faceid/v20180301/model/SingaporeIDCard.h>
#include <tencentcloud/faceid/v20180301/model/MacaoIDCard.h>
#include <tencentcloud/faceid/v20180301/model/TaiWanIDCard.h>
#include <tencentcloud/faceid/v20180301/model/JapanIDCard.h>
#include <tencentcloud/faceid/v20180301/model/BangladeshIDCard.h>
#include <tencentcloud/faceid/v20180301/model/NigeriaIDCard.h>
#include <tencentcloud/faceid/v20180301/model/NigeriaDrivingLicense.h>
#include <tencentcloud/faceid/v20180301/model/PakistanIDCard.h>
#include <tencentcloud/faceid/v20180301/model/PakistanDrivingLicense.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * License OCR result
                */
                class CardInfo : public AbstractModel
                {
                public:
                    CardInfo();
                    ~CardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hong Kong ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HKIDCard Hong Kong ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HKIDCard GetHKIDCard() const;

                    /**
                     * 设置Hong Kong ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hKIDCard Hong Kong ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHKIDCard(const HKIDCard& _hKIDCard);

                    /**
                     * 判断参数 HKIDCard 是否已赋值
                     * @return HKIDCard 是否已赋值
                     * 
                     */
                    bool HKIDCardHasBeenSet() const;

                    /**
                     * 获取Malaysia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MLIDCard Malaysia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MLIDCard GetMLIDCard() const;

                    /**
                     * 设置Malaysia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mLIDCard Malaysia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMLIDCard(const MLIDCard& _mLIDCard);

                    /**
                     * 判断参数 MLIDCard 是否已赋值
                     * @return MLIDCard 是否已赋值
                     * 
                     */
                    bool MLIDCardHasBeenSet() const;

                    /**
                     * 获取Philippines VoteID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhilippinesVoteID Philippines VoteID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PhilippinesVoteID GetPhilippinesVoteID() const;

                    /**
                     * 设置Philippines VoteID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _philippinesVoteID Philippines VoteID Card
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Indonesia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IndonesiaIDCard Indonesia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    IndonesiaIDCard GetIndonesiaIDCard() const;

                    /**
                     * 设置Indonesia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _indonesiaIDCard Indonesia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIndonesiaIDCard(const IndonesiaIDCard& _indonesiaIDCard);

                    /**
                     * 判断参数 IndonesiaIDCard 是否已赋值
                     * @return IndonesiaIDCard 是否已赋值
                     * 
                     */
                    bool IndonesiaIDCardHasBeenSet() const;

                    /**
                     * 获取Philippines Driving License
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhilippinesDrivingLicense Philippines Driving License
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PhilippinesDrivingLicense GetPhilippinesDrivingLicense() const;

                    /**
                     * 设置Philippines Driving License
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _philippinesDrivingLicense Philippines Driving License
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhilippinesTinID Philippines TinID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PhilippinesTinID GetPhilippinesTinID() const;

                    /**
                     * 设置Philippines TinID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _philippinesTinID Philippines TinID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhilippinesSSSID Philippines SSSID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PhilippinesSSSID GetPhilippinesSSSID() const;

                    /**
                     * 设置Philippines SSSID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _philippinesSSSID Philippines SSSID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhilippinesUMID Philippines UMID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PhilippinesUMID GetPhilippinesUMID() const;

                    /**
                     * 设置Philippines UMID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _philippinesUMID Philippines UMID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID Cards of Hong Kong, Macao and Taiwan (China), and International Passport
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InternationalIDPassport ID Cards of Hong Kong, Macao and Taiwan (China), and International Passport
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InternationalIDPassport GetInternationalIDPassport() const;

                    /**
                     * 设置ID Cards of Hong Kong, Macao and Taiwan (China), and International Passport
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _internationalIDPassport ID Cards of Hong Kong, Macao and Taiwan (China), and International Passport
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取General license information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GeneralCard General license information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    GeneralCard GetGeneralCard() const;

                    /**
                     * 设置General license information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _generalCard General license information
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Indonesia Driving License
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IndonesiaDrivingLicense Indonesia Driving License
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    IndonesiaDrivingLicense GetIndonesiaDrivingLicense() const;

                    /**
                     * 设置Indonesia Driving License
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _indonesiaDrivingLicense Indonesia Driving License
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Thailand ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ThailandIDCard Thailand ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ThailandIDCard GetThailandIDCard() const;

                    /**
                     * 设置Thailand ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _thailandIDCard Thailand ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetThailandIDCard(const ThailandIDCard& _thailandIDCard);

                    /**
                     * 判断参数 ThailandIDCard 是否已赋值
                     * @return ThailandIDCard 是否已赋值
                     * 
                     */
                    bool ThailandIDCardHasBeenSet() const;

                    /**
                     * 获取Singapore ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SingaporeIDCard Singapore ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SingaporeIDCard GetSingaporeIDCard() const;

                    /**
                     * 设置Singapore ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _singaporeIDCard Singapore ID Card
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Macao ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MacaoIDCard Macao ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MacaoIDCard GetMacaoIDCard() const;

                    /**
                     * 设置Macao ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _macaoIDCard Macao ID Card
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取TaiWan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaiWanIDCard TaiWan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaiWanIDCard GetTaiWanIDCard() const;

                    /**
                     * 设置TaiWan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taiWanIDCard TaiWan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Japan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JapanIDCard Japan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    JapanIDCard GetJapanIDCard() const;

                    /**
                     * 设置Japan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _japanIDCard Japan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Bangladesh ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BangladeshIDCard Bangladesh ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BangladeshIDCard GetBangladeshIDCard() const;

                    /**
                     * 设置Bangladesh ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bangladeshIDCard Bangladesh ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBangladeshIDCard(const BangladeshIDCard& _bangladeshIDCard);

                    /**
                     * 判断参数 BangladeshIDCard 是否已赋值
                     * @return BangladeshIDCard 是否已赋值
                     * 
                     */
                    bool BangladeshIDCardHasBeenSet() const;

                    /**
                     * 获取Nigeria ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NigeriaIDCard Nigeria ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NigeriaIDCard GetNigeriaIDCard() const;

                    /**
                     * 设置Nigeria ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nigeriaIDCard Nigeria ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNigeriaIDCard(const NigeriaIDCard& _nigeriaIDCard);

                    /**
                     * 判断参数 NigeriaIDCard 是否已赋值
                     * @return NigeriaIDCard 是否已赋值
                     * 
                     */
                    bool NigeriaIDCardHasBeenSet() const;

                    /**
                     * 获取Nigeria driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NigeriaDrivingLicense Nigeria driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NigeriaDrivingLicense GetNigeriaDrivingLicense() const;

                    /**
                     * 设置Nigeria driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nigeriaDrivingLicense Nigeria driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNigeriaDrivingLicense(const NigeriaDrivingLicense& _nigeriaDrivingLicense);

                    /**
                     * 判断参数 NigeriaDrivingLicense 是否已赋值
                     * @return NigeriaDrivingLicense 是否已赋值
                     * 
                     */
                    bool NigeriaDrivingLicenseHasBeenSet() const;

                    /**
                     * 获取Pakistan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PakistanIDCard Pakistan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PakistanIDCard GetPakistanIDCard() const;

                    /**
                     * 设置Pakistan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pakistanIDCard Pakistan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPakistanIDCard(const PakistanIDCard& _pakistanIDCard);

                    /**
                     * 判断参数 PakistanIDCard 是否已赋值
                     * @return PakistanIDCard 是否已赋值
                     * 
                     */
                    bool PakistanIDCardHasBeenSet() const;

                    /**
                     * 获取Pakistan driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PakistanDrivingLicense Pakistan driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PakistanDrivingLicense GetPakistanDrivingLicense() const;

                    /**
                     * 设置Pakistan driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pakistanDrivingLicense Pakistan driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPakistanDrivingLicense(const PakistanDrivingLicense& _pakistanDrivingLicense);

                    /**
                     * 判断参数 PakistanDrivingLicense 是否已赋值
                     * @return PakistanDrivingLicense 是否已赋值
                     * 
                     */
                    bool PakistanDrivingLicenseHasBeenSet() const;

                private:

                    /**
                     * Hong Kong ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HKIDCard m_hKIDCard;
                    bool m_hKIDCardHasBeenSet;

                    /**
                     * Malaysia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MLIDCard m_mLIDCard;
                    bool m_mLIDCardHasBeenSet;

                    /**
                     * Philippines VoteID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PhilippinesVoteID m_philippinesVoteID;
                    bool m_philippinesVoteIDHasBeenSet;

                    /**
                     * Indonesia ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    IndonesiaIDCard m_indonesiaIDCard;
                    bool m_indonesiaIDCardHasBeenSet;

                    /**
                     * Philippines Driving License
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PhilippinesDrivingLicense m_philippinesDrivingLicense;
                    bool m_philippinesDrivingLicenseHasBeenSet;

                    /**
                     * Philippines TinID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PhilippinesTinID m_philippinesTinID;
                    bool m_philippinesTinIDHasBeenSet;

                    /**
                     * Philippines SSSID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PhilippinesSSSID m_philippinesSSSID;
                    bool m_philippinesSSSIDHasBeenSet;

                    /**
                     * Philippines UMID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PhilippinesUMID m_philippinesUMID;
                    bool m_philippinesUMIDHasBeenSet;

                    /**
                     * ID Cards of Hong Kong, Macao and Taiwan (China), and International Passport
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InternationalIDPassport m_internationalIDPassport;
                    bool m_internationalIDPassportHasBeenSet;

                    /**
                     * General license information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    GeneralCard m_generalCard;
                    bool m_generalCardHasBeenSet;

                    /**
                     * Indonesia Driving License
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    IndonesiaDrivingLicense m_indonesiaDrivingLicense;
                    bool m_indonesiaDrivingLicenseHasBeenSet;

                    /**
                     * Thailand ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ThailandIDCard m_thailandIDCard;
                    bool m_thailandIDCardHasBeenSet;

                    /**
                     * Singapore ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SingaporeIDCard m_singaporeIDCard;
                    bool m_singaporeIDCardHasBeenSet;

                    /**
                     * Macao ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MacaoIDCard m_macaoIDCard;
                    bool m_macaoIDCardHasBeenSet;

                    /**
                     * TaiWan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaiWanIDCard m_taiWanIDCard;
                    bool m_taiWanIDCardHasBeenSet;

                    /**
                     * Japan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    JapanIDCard m_japanIDCard;
                    bool m_japanIDCardHasBeenSet;

                    /**
                     * Bangladesh ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BangladeshIDCard m_bangladeshIDCard;
                    bool m_bangladeshIDCardHasBeenSet;

                    /**
                     * Nigeria ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NigeriaIDCard m_nigeriaIDCard;
                    bool m_nigeriaIDCardHasBeenSet;

                    /**
                     * Nigeria driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NigeriaDrivingLicense m_nigeriaDrivingLicense;
                    bool m_nigeriaDrivingLicenseHasBeenSet;

                    /**
                     * Pakistan ID Card
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PakistanIDCard m_pakistanIDCard;
                    bool m_pakistanIDCardHasBeenSet;

                    /**
                     * Pakistan driving license
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PakistanDrivingLicense m_pakistanDrivingLicense;
                    bool m_pakistanDrivingLicenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CARDINFO_H_
