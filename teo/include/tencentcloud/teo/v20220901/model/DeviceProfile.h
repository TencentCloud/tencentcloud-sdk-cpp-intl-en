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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DEVICEPROFILE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DEVICEPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Describes the client device configuration.
                */
                class DeviceProfile : public AbstractModel
                {
                public:
                    DeviceProfile();
                    ~DeviceProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client device type. valid values: <li>iOS;</li> <li>Android;</li> <li>WebView.</li>.
                     * @return ClientType Client device type. valid values: <li>iOS;</li> <li>Android;</li> <li>WebView.</li>.
                     * 
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置Client device type. valid values: <li>iOS;</li> <li>Android;</li> <li>WebView.</li>.
                     * @param _clientType Client device type. valid values: <li>iOS;</li> <li>Android;</li> <li>WebView.</li>.
                     * 
                     */
                    void SetClientType(const std::string& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取The minimum value to determine a request as high-risk ranges from 1–99. the larger the value, the higher the request risk, and the closer it resembles a request initiated by a Bot client. the default value is 50, corresponding to high-risk for values 51–100.
                     * @return HighRiskMinScore The minimum value to determine a request as high-risk ranges from 1–99. the larger the value, the higher the request risk, and the closer it resembles a request initiated by a Bot client. the default value is 50, corresponding to high-risk for values 51–100.
                     * 
                     */
                    uint64_t GetHighRiskMinScore() const;

                    /**
                     * 设置The minimum value to determine a request as high-risk ranges from 1–99. the larger the value, the higher the request risk, and the closer it resembles a request initiated by a Bot client. the default value is 50, corresponding to high-risk for values 51–100.
                     * @param _highRiskMinScore The minimum value to determine a request as high-risk ranges from 1–99. the larger the value, the higher the request risk, and the closer it resembles a request initiated by a Bot client. the default value is 50, corresponding to high-risk for values 51–100.
                     * 
                     */
                    void SetHighRiskMinScore(const uint64_t& _highRiskMinScore);

                    /**
                     * 判断参数 HighRiskMinScore 是否已赋值
                     * @return HighRiskMinScore 是否已赋值
                     * 
                     */
                    bool HighRiskMinScoreHasBeenSet() const;

                    /**
                     * 获取Handling method for high-risk requests. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     * @return HighRiskRequestAction Handling method for high-risk requests. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     * 
                     */
                    SecurityAction GetHighRiskRequestAction() const;

                    /**
                     * 设置Handling method for high-risk requests. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     * @param _highRiskRequestAction Handling method for high-risk requests. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     * 
                     */
                    void SetHighRiskRequestAction(const SecurityAction& _highRiskRequestAction);

                    /**
                     * 判断参数 HighRiskRequestAction 是否已赋值
                     * @return HighRiskRequestAction 是否已赋值
                     * 
                     */
                    bool HighRiskRequestActionHasBeenSet() const;

                    /**
                     * 获取Specifies the minimum value to determine a request as medium-risk. value range: 1–99. the larger the value, the higher the request risk, resembling requests initiated by a Bot client. default value: 15, corresponding to medium-risk for values 16–50.
                     * @return MediumRiskMinScore Specifies the minimum value to determine a request as medium-risk. value range: 1–99. the larger the value, the higher the request risk, resembling requests initiated by a Bot client. default value: 15, corresponding to medium-risk for values 16–50.
                     * 
                     */
                    uint64_t GetMediumRiskMinScore() const;

                    /**
                     * 设置Specifies the minimum value to determine a request as medium-risk. value range: 1–99. the larger the value, the higher the request risk, resembling requests initiated by a Bot client. default value: 15, corresponding to medium-risk for values 16–50.
                     * @param _mediumRiskMinScore Specifies the minimum value to determine a request as medium-risk. value range: 1–99. the larger the value, the higher the request risk, resembling requests initiated by a Bot client. default value: 15, corresponding to medium-risk for values 16–50.
                     * 
                     */
                    void SetMediumRiskMinScore(const uint64_t& _mediumRiskMinScore);

                    /**
                     * 判断参数 MediumRiskMinScore 是否已赋值
                     * @return MediumRiskMinScore 是否已赋值
                     * 
                     */
                    bool MediumRiskMinScoreHasBeenSet() const;

                    /**
                     * 获取Handling method for medium-risk requests. SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Redirect: Redirect;</li> <li>Challenge: Challenge.</li> default value is Monitor.
                     * @return MediumRiskRequestAction Handling method for medium-risk requests. SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Redirect: Redirect;</li> <li>Challenge: Challenge.</li> default value is Monitor.
                     * 
                     */
                    SecurityAction GetMediumRiskRequestAction() const;

                    /**
                     * 设置Handling method for medium-risk requests. SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Redirect: Redirect;</li> <li>Challenge: Challenge.</li> default value is Monitor.
                     * @param _mediumRiskRequestAction Handling method for medium-risk requests. SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Redirect: Redirect;</li> <li>Challenge: Challenge.</li> default value is Monitor.
                     * 
                     */
                    void SetMediumRiskRequestAction(const SecurityAction& _mediumRiskRequestAction);

                    /**
                     * 判断参数 MediumRiskRequestAction 是否已赋值
                     * @return MediumRiskRequestAction 是否已赋值
                     * 
                     */
                    bool MediumRiskRequestActionHasBeenSet() const;

                private:

                    /**
                     * Client device type. valid values: <li>iOS;</li> <li>Android;</li> <li>WebView.</li>.
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * The minimum value to determine a request as high-risk ranges from 1–99. the larger the value, the higher the request risk, and the closer it resembles a request initiated by a Bot client. the default value is 50, corresponding to high-risk for values 51–100.
                     */
                    uint64_t m_highRiskMinScore;
                    bool m_highRiskMinScoreHasBeenSet;

                    /**
                     * Handling method for high-risk requests. valid values for SecurityAction Name: <li>Deny: block;</li> <li>Monitor: observation;</li> <li>Redirect: redirection;</li> <li>Challenge: Challenge.</li> default value: Monitor.
                     */
                    SecurityAction m_highRiskRequestAction;
                    bool m_highRiskRequestActionHasBeenSet;

                    /**
                     * Specifies the minimum value to determine a request as medium-risk. value range: 1–99. the larger the value, the higher the request risk, resembling requests initiated by a Bot client. default value: 15, corresponding to medium-risk for values 16–50.
                     */
                    uint64_t m_mediumRiskMinScore;
                    bool m_mediumRiskMinScoreHasBeenSet;

                    /**
                     * Handling method for medium-risk requests. SecurityAction Name parameter supports: <li>Deny: block;</li> <li>Monitor: observe;</li> <li>Redirect: Redirect;</li> <li>Challenge: Challenge.</li> default value is Monitor.
                     */
                    SecurityAction m_mediumRiskRequestAction;
                    bool m_mediumRiskRequestActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEVICEPROFILE_H_
