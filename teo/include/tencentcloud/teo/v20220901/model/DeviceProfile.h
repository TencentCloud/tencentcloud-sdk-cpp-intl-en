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
                * Client device configuration
                */
                class DeviceProfile : public AbstractModel
                {
                public:
                    DeviceProfile();
                    ~DeviceProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Client device type. Valid values: <li>iOS;</li><li>Android;</li><li>WebView;</li><li>WeChatMiniProgram.</li></p>
                     * @return ClientType <p>Client device type. Valid values: <li>iOS;</li><li>Android;</li><li>WebView;</li><li>WeChatMiniProgram.</li></p>
                     * 
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置<p>Client device type. Valid values: <li>iOS;</li><li>Android;</li><li>WebView;</li><li>WeChatMiniProgram.</li></p>
                     * @param _clientType <p>Client device type. Valid values: <li>iOS;</li><li>Android;</li><li>WebView;</li><li>WeChatMiniProgram.</li></p>
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
                     * 获取<p>Minimum risk score for high-risk requests. A request is considered high-risk when its score is equal to or greater than this value.</p><p>Value range: [2, 99]</p><p>Default value: 50</p>
                     * @return HighRiskMinScore <p>Minimum risk score for high-risk requests. A request is considered high-risk when its score is equal to or greater than this value.</p><p>Value range: [2, 99]</p><p>Default value: 50</p>
                     * 
                     */
                    uint64_t GetHighRiskMinScore() const;

                    /**
                     * 设置<p>Minimum risk score for high-risk requests. A request is considered high-risk when its score is equal to or greater than this value.</p><p>Value range: [2, 99]</p><p>Default value: 50</p>
                     * @param _highRiskMinScore <p>Minimum risk score for high-risk requests. A request is considered high-risk when its score is equal to or greater than this value.</p><p>Value range: [2, 99]</p><p>Default value: 50</p>
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
                     * 获取<p>Handling method for high-risk requests. Supported values for the Name parameter of SecurityAction: <li>Deny: Block;</li><li>Monitor: Observe;</li><li>Redirect: Redirection;</li><li>Challenge: Challenge.</li>Default value: Monitor.</p>
                     * @return HighRiskRequestAction <p>Handling method for high-risk requests. Supported values for the Name parameter of SecurityAction: <li>Deny: Block;</li><li>Monitor: Observe;</li><li>Redirect: Redirection;</li><li>Challenge: Challenge.</li>Default value: Monitor.</p>
                     * 
                     */
                    SecurityAction GetHighRiskRequestAction() const;

                    /**
                     * 设置<p>Handling method for high-risk requests. Supported values for the Name parameter of SecurityAction: <li>Deny: Block;</li><li>Monitor: Observe;</li><li>Redirect: Redirection;</li><li>Challenge: Challenge.</li>Default value: Monitor.</p>
                     * @param _highRiskRequestAction <p>Handling method for high-risk requests. Supported values for the Name parameter of SecurityAction: <li>Deny: Block;</li><li>Monitor: Observe;</li><li>Redirect: Redirection;</li><li>Challenge: Challenge.</li>Default value: Monitor.</p>
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
                     * 获取<p>The minimum risk score for a medium-risk request. When the score is equal to or greater than this value and less than HighRiskMinScore, it is determined as medium-risk. When it is below this value, it is determined as low risk.</p><p>Value range: [1, 98]</p><p>Default value: 15</p>
                     * @return MediumRiskMinScore <p>The minimum risk score for a medium-risk request. When the score is equal to or greater than this value and less than HighRiskMinScore, it is determined as medium-risk. When it is below this value, it is determined as low risk.</p><p>Value range: [1, 98]</p><p>Default value: 15</p>
                     * 
                     */
                    uint64_t GetMediumRiskMinScore() const;

                    /**
                     * 设置<p>The minimum risk score for a medium-risk request. When the score is equal to or greater than this value and less than HighRiskMinScore, it is determined as medium-risk. When it is below this value, it is determined as low risk.</p><p>Value range: [1, 98]</p><p>Default value: 15</p>
                     * @param _mediumRiskMinScore <p>The minimum risk score for a medium-risk request. When the score is equal to or greater than this value and less than HighRiskMinScore, it is determined as medium-risk. When it is below this value, it is determined as low risk.</p><p>Value range: [1, 98]</p><p>Default value: 15</p>
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
                     * 获取<p>Handling method for medium risk requests. Supported values for the Name of SecurityAction: <li>Deny: block;</li><li>Monitor: monitor;</li><li>Redirect: redirect;</li><li>Challenge: challenge.</li>Default value: Monitor.</p>
                     * @return MediumRiskRequestAction <p>Handling method for medium risk requests. Supported values for the Name of SecurityAction: <li>Deny: block;</li><li>Monitor: monitor;</li><li>Redirect: redirect;</li><li>Challenge: challenge.</li>Default value: Monitor.</p>
                     * 
                     */
                    SecurityAction GetMediumRiskRequestAction() const;

                    /**
                     * 设置<p>Handling method for medium risk requests. Supported values for the Name of SecurityAction: <li>Deny: block;</li><li>Monitor: monitor;</li><li>Redirect: redirect;</li><li>Challenge: challenge.</li>Default value: Monitor.</p>
                     * @param _mediumRiskRequestAction <p>Handling method for medium risk requests. Supported values for the Name of SecurityAction: <li>Deny: block;</li><li>Monitor: monitor;</li><li>Redirect: redirect;</li><li>Challenge: challenge.</li>Default value: Monitor.</p>
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
                     * <p>Client device type. Valid values: <li>iOS;</li><li>Android;</li><li>WebView;</li><li>WeChatMiniProgram.</li></p>
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * <p>Minimum risk score for high-risk requests. A request is considered high-risk when its score is equal to or greater than this value.</p><p>Value range: [2, 99]</p><p>Default value: 50</p>
                     */
                    uint64_t m_highRiskMinScore;
                    bool m_highRiskMinScoreHasBeenSet;

                    /**
                     * <p>Handling method for high-risk requests. Supported values for the Name parameter of SecurityAction: <li>Deny: Block;</li><li>Monitor: Observe;</li><li>Redirect: Redirection;</li><li>Challenge: Challenge.</li>Default value: Monitor.</p>
                     */
                    SecurityAction m_highRiskRequestAction;
                    bool m_highRiskRequestActionHasBeenSet;

                    /**
                     * <p>The minimum risk score for a medium-risk request. When the score is equal to or greater than this value and less than HighRiskMinScore, it is determined as medium-risk. When it is below this value, it is determined as low risk.</p><p>Value range: [1, 98]</p><p>Default value: 15</p>
                     */
                    uint64_t m_mediumRiskMinScore;
                    bool m_mediumRiskMinScoreHasBeenSet;

                    /**
                     * <p>Handling method for medium risk requests. Supported values for the Name of SecurityAction: <li>Deny: block;</li><li>Monitor: monitor;</li><li>Redirect: redirect;</li><li>Challenge: challenge.</li>Default value: Monitor.</p>
                     */
                    SecurityAction m_mediumRiskRequestAction;
                    bool m_mediumRiskRequestActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEVICEPROFILE_H_
