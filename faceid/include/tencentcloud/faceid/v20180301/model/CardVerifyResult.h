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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CARDVERIFYRESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CARDVERIFYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/FileInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * The result of a single authentication or OCR process during the identity verification.
                */
                class CardVerifyResult : public AbstractModel
                {
                public:
                    CardVerifyResult();
                    ~CardVerifyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the authentication or OCR process is successful.
                     * @return IsPass Whether the authentication or OCR process is successful.
                     */
                    bool GetIsPass() const;

                    /**
                     * 设置Whether the authentication or OCR process is successful.
                     * @param IsPass Whether the authentication or OCR process is successful.
                     */
                    void SetIsPass(const bool& _isPass);

                    /**
                     * 判断参数 IsPass 是否已赋值
                     * @return IsPass 是否已赋值
                     */
                    bool IsPassHasBeenSet() const;

                    /**
                     * 获取The video for ID card authentication. This field is returned only if the video-based ID card authentication is enabled. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardVideo The video for ID card authentication. This field is returned only if the video-based ID card authentication is enabled. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo GetCardVideo() const;

                    /**
                     * 设置The video for ID card authentication. This field is returned only if the video-based ID card authentication is enabled. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CardVideo The video for ID card authentication. This field is returned only if the video-based ID card authentication is enabled. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCardVideo(const FileInfo& _cardVideo);

                    /**
                     * 判断参数 CardVideo 是否已赋值
                     * @return CardVideo 是否已赋值
                     */
                    bool CardVideoHasBeenSet() const;

                    /**
                     * 获取The identity document image. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardImage The identity document image. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo GetCardImage() const;

                    /**
                     * 设置The identity document image. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CardImage The identity document image. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCardImage(const FileInfo& _cardImage);

                    /**
                     * 判断参数 CardImage 是否已赋值
                     * @return CardImage 是否已赋值
                     */
                    bool CardImageHasBeenSet() const;

                    /**
                     * 获取The OCR result (in JSON) of the identity document image. If authentication or OCR fails, this parameter is left empty. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string: Date of birth.
- ID string: ID number.
- Name string: Name.
- Address string: Address.
- Type string: Identity document type.

When the value of `IdCardType` is `PhilippinesVoteID`:
- Birthday string: Date of birth.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- VIN string: VIN number.
- CivilStatus string: Marital status.
- Citizenship string: Citizenship.
- PrecinctNo string: Region.

When the value of `IdCardType` is `PhilippinesDrivingLicense`:
- Sex string: Gender.
- Birthday string: Date of birth.
- Name string: Name.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- MiddleName string: Middle name.
- Nationality string: Nationality.
- LicenseNo string: License number.
- ExpiresDate string: Validity period.
- AgencyCode string: Agency code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CardInfoOcrJson The OCR result (in JSON) of the identity document image. If authentication or OCR fails, this parameter is left empty. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string: Date of birth.
- ID string: ID number.
- Name string: Name.
- Address string: Address.
- Type string: Identity document type.

When the value of `IdCardType` is `PhilippinesVoteID`:
- Birthday string: Date of birth.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- VIN string: VIN number.
- CivilStatus string: Marital status.
- Citizenship string: Citizenship.
- PrecinctNo string: Region.

When the value of `IdCardType` is `PhilippinesDrivingLicense`:
- Sex string: Gender.
- Birthday string: Date of birth.
- Name string: Name.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- MiddleName string: Middle name.
- Nationality string: Nationality.
- LicenseNo string: License number.
- ExpiresDate string: Validity period.
- AgencyCode string: Agency code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo GetCardInfoOcrJson() const;

                    /**
                     * 设置The OCR result (in JSON) of the identity document image. If authentication or OCR fails, this parameter is left empty. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string: Date of birth.
- ID string: ID number.
- Name string: Name.
- Address string: Address.
- Type string: Identity document type.

When the value of `IdCardType` is `PhilippinesVoteID`:
- Birthday string: Date of birth.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- VIN string: VIN number.
- CivilStatus string: Marital status.
- Citizenship string: Citizenship.
- PrecinctNo string: Region.

When the value of `IdCardType` is `PhilippinesDrivingLicense`:
- Sex string: Gender.
- Birthday string: Date of birth.
- Name string: Name.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- MiddleName string: Middle name.
- Nationality string: Nationality.
- LicenseNo string: License number.
- ExpiresDate string: Validity period.
- AgencyCode string: Agency code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CardInfoOcrJson The OCR result (in JSON) of the identity document image. If authentication or OCR fails, this parameter is left empty. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string: Date of birth.
- ID string: ID number.
- Name string: Name.
- Address string: Address.
- Type string: Identity document type.

When the value of `IdCardType` is `PhilippinesVoteID`:
- Birthday string: Date of birth.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- VIN string: VIN number.
- CivilStatus string: Marital status.
- Citizenship string: Citizenship.
- PrecinctNo string: Region.

When the value of `IdCardType` is `PhilippinesDrivingLicense`:
- Sex string: Gender.
- Birthday string: Date of birth.
- Name string: Name.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- MiddleName string: Middle name.
- Nationality string: Nationality.
- LicenseNo string: License number.
- ExpiresDate string: Validity period.
- AgencyCode string: Agency code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCardInfoOcrJson(const FileInfo& _cardInfoOcrJson);

                    /**
                     * 判断参数 CardInfoOcrJson 是否已赋值
                     * @return CardInfoOcrJson 是否已赋值
                     */
                    bool CardInfoOcrJsonHasBeenSet() const;

                    /**
                     * 获取The request ID of a single process.
                     * @return RequestId The request ID of a single process.
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置The request ID of a single process.
                     * @param RequestId The request ID of a single process.
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     */
                    bool RequestIdHasBeenSet() const;

                private:

                    /**
                     * Whether the authentication or OCR process is successful.
                     */
                    bool m_isPass;
                    bool m_isPassHasBeenSet;

                    /**
                     * The video for ID card authentication. This field is returned only if the video-based ID card authentication is enabled. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo m_cardVideo;
                    bool m_cardVideoHasBeenSet;

                    /**
                     * The identity document image. The URL is valid for 10 minutes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo m_cardImage;
                    bool m_cardImageHasBeenSet;

                    /**
                     * The OCR result (in JSON) of the identity document image. If authentication or OCR fails, this parameter is left empty. The URL is valid for 10 minutes.
When the value of `IdCardType` is `HK`:
- CnName string: Chinese name
- EnName string: English name
- TelexCode string: The code corresponding to the Chinese name
- Sex string: Gender. Valid values: `M` (male) and `F` (female).
- Birthday string: Date of birth.
- Permanent int: Whether it is a permanent residence identity card. Valid values: `0` (non-permanent), `1` (permanent), and `-1` (unknown).
- IdNum string: ID number.
- Symbol string: The ID symbol below the date of birth, such as "***AZ".
- FirstIssueDate string: The date of first issuance.
- CurrentIssueDate string: The date of latest issuance.

When the value of `IdCardType` is `ML`:
- Sex string: `LELAKI` (male) and `PEREMPUAN` (female).
- Birthday string: Date of birth.
- ID string: ID number.
- Name string: Name.
- Address string: Address.
- Type string: Identity document type.

When the value of `IdCardType` is `PhilippinesVoteID`:
- Birthday string: Date of birth.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- VIN string: VIN number.
- CivilStatus string: Marital status.
- Citizenship string: Citizenship.
- PrecinctNo string: Region.

When the value of `IdCardType` is `PhilippinesDrivingLicense`:
- Sex string: Gender.
- Birthday string: Date of birth.
- Name string: Name.
- Address string: Address.
- LastName string: Family name.
- FirstName string: First name.
- MiddleName string: Middle name.
- Nationality string: Nationality.
- LicenseNo string: License number.
- ExpiresDate string: Validity period.
- AgencyCode string: Agency code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileInfo m_cardInfoOcrJson;
                    bool m_cardInfoOcrJsonHasBeenSet;

                    /**
                     * The request ID of a single process.
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CARDVERIFYRESULT_H_
