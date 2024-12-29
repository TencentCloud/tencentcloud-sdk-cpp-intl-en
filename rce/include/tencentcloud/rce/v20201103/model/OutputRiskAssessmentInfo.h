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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTRISKASSESSMENTINFO_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTRISKASSESSMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/OutputRiskAssessmentExtraInfoPair.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * Query output parameters of risk assessment results.
                */
                class OutputRiskAssessmentInfo : public AbstractModel
                {
                public:
                    OutputRiskAssessmentInfo();
                    ~OutputRiskAssessmentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Risk value.
Note: This field may return null, indicating that no valid value is found.
                     * @return RiskLevel Risk value.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Risk value.
Note: This field may return null, indicating that no valid value is found.
                     * @param _riskLevel Risk value.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Risk type.
Note: This field may return null, indicating that no valid value is found.
                     * @return RiskType Risk type.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<int64_t> GetRiskType() const;

                    /**
                     * 设置Risk type.
Note: This field may return null, indicating that no valid value is found.
                     * @param _riskType Risk type.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRiskType(const std::vector<int64_t>& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取Device identification

Note: This field may return null, indicating that no valid value is found.
                     * @return DeviceId Device identification

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device identification

Note: This field may return null, indicating that no valid value is found.
                     * @param _deviceId Device identification

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Extended attributes.
Note: This field may return null, indicating that no valid value is found.
                     * @return ExtraInfo Extended attributes.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<OutputRiskAssessmentExtraInfoPair> GetExtraInfo() const;

                    /**
                     * 设置Extended attributes.
Note: This field may return null, indicating that no valid value is found.
                     * @param _extraInfo Extended attributes.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetExtraInfo(const std::vector<OutputRiskAssessmentExtraInfoPair>& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取Token generation timestamp.
Note: This field may return null, indicating that no valid value is found.
                     * @return TokenTime Token generation timestamp.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetTokenTime() const;

                    /**
                     * 设置Token generation timestamp.
Note: This field may return null, indicating that no valid value is found.
                     * @param _tokenTime Token generation timestamp.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetTokenTime(const std::string& _tokenTime);

                    /**
                     * 判断参数 TokenTime 是否已赋值
                     * @return TokenTime 是否已赋值
                     * 
                     */
                    bool TokenTimeHasBeenSet() const;

                private:

                    /**
                     * Risk value.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Risk type.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<int64_t> m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * Device identification

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Extended attributes.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<OutputRiskAssessmentExtraInfoPair> m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * Token generation timestamp.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_tokenTime;
                    bool m_tokenTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTRISKASSESSMENTINFO_H_
