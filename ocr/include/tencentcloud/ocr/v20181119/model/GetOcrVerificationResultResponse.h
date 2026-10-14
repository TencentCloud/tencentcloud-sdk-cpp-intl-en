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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRVERIFICATIONRESULTRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRVERIFICATIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/GeneralCard.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GetOcrVerificationResult response structure.
                */
                class GetOcrVerificationResultResponse : public AbstractModel
                {
                public:
                    GetOcrVerificationResultResponse();
                    ~GetOcrVerificationResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Indicates the completion status of an SDK verification process.</p><p>Enumeration values: </p><ul><li>PROCESSING: PROCESSING.</li><li>COMPLETE: Completed.</li></ul>
                     * @return Status <p>Indicates the completion status of an SDK verification process.</p><p>Enumeration values: </p><ul><li>PROCESSING: PROCESSING.</li><li>COMPLETE: Completed.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Front image of the card.
                     * @return CardImage Front image of the card.
                     * 
                     */
                    std::string GetCardImage() const;

                    /**
                     * 判断参数 CardImage 是否已赋值
                     * @return CardImage 是否已赋值
                     * 
                     */
                    bool CardImageHasBeenSet() const;

                    /**
                     * 获取Back image of the card.
                     * @return CardImageBack Back image of the card.
                     * 
                     */
                    std::string GetCardImageBack() const;

                    /**
                     * 判断参数 CardImageBack 是否已赋值
                     * @return CardImageBack 是否已赋值
                     * 
                     */
                    bool CardImageBackHasBeenSet() const;

                    /**
                     * 获取Portrait image on the front of the card.
                     * @return HeadImage Portrait image on the front of the card.
                     * 
                     */
                    std::string GetHeadImage() const;

                    /**
                     * 判断参数 HeadImage 是否已赋值
                     * @return HeadImage 是否已赋值
                     * 
                     */
                    bool HeadImageHasBeenSet() const;

                    /**
                     * 获取Result code of this verification.
                     * @return ResultCode Result code of this verification.
                     * 
                     */
                    std::string GetResultCode() const;

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取Indicates the risk level of the device from which the current request is sent. There are four levels:
1 - Safe.
2 - Low risk.
3 - Medium risk.
4 - High risk.
Empty - The risk level is not obtained.
Returned only in the enhanced version. Empty by default.
                     * @return DeviceInfoLevel Indicates the risk level of the device from which the current request is sent. There are four levels:
1 - Safe.
2 - Low risk.
3 - Medium risk.
4 - High risk.
Empty - The risk level is not obtained.
Returned only in the enhanced version. Empty by default.
                     * 
                     */
                    std::string GetDeviceInfoLevel() const;

                    /**
                     * 判断参数 DeviceInfoLevel 是否已赋值
                     * @return DeviceInfoLevel 是否已赋值
                     * 
                     */
                    bool DeviceInfoLevelHasBeenSet() const;

                    /**
                     * 获取Card recognition result. The latest result is taken as the valid one.
                     * @return CardInfo Card recognition result. The latest result is taken as the valid one.
                     * 
                     */
                    GeneralCard GetCardInfo() const;

                    /**
                     * 判断参数 CardInfo 是否已赋值
                     * @return CardInfo 是否已赋值
                     * 
                     */
                    bool CardInfoHasBeenSet() const;

                    /**
                     * 获取Recognition result on the back of the card.
                     * @return BackCardInfo Recognition result on the back of the card.
                     * 
                     */
                    GeneralCard GetBackCardInfo() const;

                    /**
                     * 判断参数 BackCardInfo 是否已赋值
                     * @return BackCardInfo 是否已赋值
                     * 
                     */
                    bool BackCardInfoHasBeenSet() const;

                    /**
                     * 获取Authenticity check. Valid values:
0: Unable to determine (caused by blur, incompleteness, glare, or low brightness).
1: Fake.
2: Genuine.
Only effective for Hong Kong, China ID card recognition. This field is gradually being phased out.
                     * @return FakeDetectResult Authenticity check. Valid values:
0: Unable to determine (caused by blur, incompleteness, glare, or low brightness).
1: Fake.
2: Genuine.
Only effective for Hong Kong, China ID card recognition. This field is gradually being phased out.
                     * 
                     */
                    int64_t GetFakeDetectResult() const;

                    /**
                     * 判断参数 FakeDetectResult 是否已赋值
                     * @return FakeDetectResult 是否已赋值
                     * 
                     */
                    bool FakeDetectResultHasBeenSet() const;

                    /**
                     * 获取Card Warning Information

-9101 Alarm for covered certificate
-9102 Alarm for photocopied certificate
-9103 Alarm for photographed certificate
-9104 Alarm for tamper certificate
-9107 Alarm for reflective certificate
-9108 Alarm for blurry certificate 
-9109 This capability is not enabled. Please contact customer support to activate the alert service.
                     * @return WarnCardInfos Card Warning Information

-9101 Alarm for covered certificate
-9102 Alarm for photocopied certificate
-9103 Alarm for photographed certificate
-9104 Alarm for tamper certificate
-9107 Alarm for reflective certificate
-9108 Alarm for blurry certificate 
-9109 This capability is not enabled. Please contact customer support to activate the alert service.
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                private:

                    /**
                     * <p>Indicates the completion status of an SDK verification process.</p><p>Enumeration values: </p><ul><li>PROCESSING: PROCESSING.</li><li>COMPLETE: Completed.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Front image of the card.
                     */
                    std::string m_cardImage;
                    bool m_cardImageHasBeenSet;

                    /**
                     * Back image of the card.
                     */
                    std::string m_cardImageBack;
                    bool m_cardImageBackHasBeenSet;

                    /**
                     * Portrait image on the front of the card.
                     */
                    std::string m_headImage;
                    bool m_headImageHasBeenSet;

                    /**
                     * Result code of this verification.
                     */
                    std::string m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * Indicates the risk level of the device from which the current request is sent. There are four levels:
1 - Safe.
2 - Low risk.
3 - Medium risk.
4 - High risk.
Empty - The risk level is not obtained.
Returned only in the enhanced version. Empty by default.
                     */
                    std::string m_deviceInfoLevel;
                    bool m_deviceInfoLevelHasBeenSet;

                    /**
                     * Card recognition result. The latest result is taken as the valid one.
                     */
                    GeneralCard m_cardInfo;
                    bool m_cardInfoHasBeenSet;

                    /**
                     * Recognition result on the back of the card.
                     */
                    GeneralCard m_backCardInfo;
                    bool m_backCardInfoHasBeenSet;

                    /**
                     * Authenticity check. Valid values:
0: Unable to determine (caused by blur, incompleteness, glare, or low brightness).
1: Fake.
2: Genuine.
Only effective for Hong Kong, China ID card recognition. This field is gradually being phased out.
                     */
                    int64_t m_fakeDetectResult;
                    bool m_fakeDetectResultHasBeenSet;

                    /**
                     * Card Warning Information

-9101 Alarm for covered certificate
-9102 Alarm for photocopied certificate
-9103 Alarm for photographed certificate
-9104 Alarm for tamper certificate
-9107 Alarm for reflective certificate
-9108 Alarm for blurry certificate 
-9109 This capability is not enabled. Please contact customer support to activate the alert service.
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRVERIFICATIONRESULTRESPONSE_H_
