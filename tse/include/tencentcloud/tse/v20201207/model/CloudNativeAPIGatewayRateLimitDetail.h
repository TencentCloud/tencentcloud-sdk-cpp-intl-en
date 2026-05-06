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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYRATELIMITDETAIL_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYRATELIMITDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/QpsThreshold.h>
#include <tencentcloud/tse/v20201207/model/ExternalRedis.h>
#include <tencentcloud/tse/v20201207/model/RateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/LimitRule.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Cloud-native gateway Tse traffic throttling plugin configuration
                */
                class CloudNativeAPIGatewayRateLimitDetail : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayRateLimitDetail();
                    ~CloudNativeAPIGatewayRateLimitDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Plug-in enable status
                     * @return Enabled Plug-in enable status
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Plug-in enable status
                     * @param _enabled Plug-in enable status
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取qps threshold
                     * @return QpsThresholds qps threshold
                     * 
                     */
                    std::vector<QpsThreshold> GetQpsThresholds() const;

                    /**
                     * 设置qps threshold
                     * @param _qpsThresholds qps threshold
                     * 
                     */
                    void SetQpsThresholds(const std::vector<QpsThreshold>& _qpsThresholds);

                    /**
                     * 判断参数 QpsThresholds 是否已赋值
                     * @return QpsThresholds 是否已赋值
                     * 
                     */
                    bool QpsThresholdsHasBeenSet() const;

                    /**
                     * 获取Request path that requires traffic control
                     * @return Path Request path that requires traffic control
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Request path that requires traffic control
                     * @param _path Request path that requires traffic control
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Request header Key for traffic control
                     * @return Header Request header Key for traffic control
                     * 
                     */
                    std::string GetHeader() const;

                    /**
                     * 设置Request header Key for traffic control
                     * @param _header Request header Key for traffic control
                     * 
                     */
                    void SetHeader(const std::string& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取Traffic throttling basis
ip service consumer credential path header
                     * @return LimitBy Traffic throttling basis
ip service consumer credential path header
                     * 
                     */
                    std::string GetLimitBy() const;

                    /**
                     * 设置Traffic throttling basis
ip service consumer credential path header
                     * @param _limitBy Traffic throttling basis
ip service consumer credential path header
                     * 
                     */
                    void SetLimitBy(const std::string& _limitBy);

                    /**
                     * 判断参数 LimitBy 是否已赋值
                     * @return LimitBy 是否已赋值
                     * 
                     */
                    bool LimitByHasBeenSet() const;

                    /**
                     * 获取external redis configuration
                     * @return ExternalRedis external redis configuration
                     * 
                     */
                    ExternalRedis GetExternalRedis() const;

                    /**
                     * 设置external redis configuration
                     * @param _externalRedis external redis configuration
                     * 
                     */
                    void SetExternalRedis(const ExternalRedis& _externalRedis);

                    /**
                     * 判断参数 ExternalRedis 是否已赋值
                     * @return ExternalRedis 是否已赋值
                     * 
                     */
                    bool ExternalRedisHasBeenSet() const;

                    /**
                     * 获取redis configuration in global configuration
                     * @return GlobalConfigId redis configuration in global configuration
                     * 
                     */
                    std::string GetGlobalConfigId() const;

                    /**
                     * 设置redis configuration in global configuration
                     * @param _globalConfigId redis configuration in global configuration
                     * 
                     */
                    void SetGlobalConfigId(const std::string& _globalConfigId);

                    /**
                     * 判断参数 GlobalConfigId 是否已赋值
                     * @return GlobalConfigId 是否已赋值
                     * 
                     */
                    bool GlobalConfigIdHasBeenSet() const;

                    /**
                     * 获取Counter policy 
local standalone
default redis
external redis

                     * @return Policy Counter policy 
local standalone
default redis
external redis

                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置Counter policy 
local standalone
default redis
external redis

                     * @param _policy Counter policy 
local standalone
default redis
external redis

                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Response configuration, response policy is text

                     * @return RateLimitResponse Response configuration, response policy is text

                     * 
                     */
                    RateLimitResponse GetRateLimitResponse() const;

                    /**
                     * 设置Response configuration, response policy is text

                     * @param _rateLimitResponse Response configuration, response policy is text

                     * 
                     */
                    void SetRateLimitResponse(const RateLimitResponse& _rateLimitResponse);

                    /**
                     * 判断参数 RateLimitResponse 是否已赋值
                     * @return RateLimitResponse 是否已赋值
                     * 
                     */
                    bool RateLimitResponseHasBeenSet() const;

                    /**
                     * 获取Request forwarding address
                     * @return RateLimitResponseUrl Request forwarding address
                     * 
                     */
                    std::string GetRateLimitResponseUrl() const;

                    /**
                     * 设置Request forwarding address
                     * @param _rateLimitResponseUrl Request forwarding address
                     * 
                     */
                    void SetRateLimitResponseUrl(const std::string& _rateLimitResponseUrl);

                    /**
                     * 判断参数 RateLimitResponseUrl 是否已赋值
                     * @return RateLimitResponseUrl 是否已赋值
                     * 
                     */
                    bool RateLimitResponseUrlHasBeenSet() const;

                    /**
                     * 获取response policy
url request forwarding
Response configuration
default mode: return directly.

                     * @return ResponseType response policy
url request forwarding
Response configuration
default mode: return directly.

                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 设置response policy
url request forwarding
Response configuration
default mode: return directly.

                     * @param _responseType response policy
url request forwarding
Response configuration
default mode: return directly.

                     * 
                     */
                    void SetResponseType(const std::string& _responseType);

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     * 
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取Whether to hide the traffic throttling client response header
                     * @return HideClientHeaders Whether to hide the traffic throttling client response header
                     * 
                     */
                    bool GetHideClientHeaders() const;

                    /**
                     * 设置Whether to hide the traffic throttling client response header
                     * @param _hideClientHeaders Whether to hide the traffic throttling client response header
                     * 
                     */
                    void SetHideClientHeaders(const bool& _hideClientHeaders);

                    /**
                     * 判断参数 HideClientHeaders 是否已赋值
                     * @return HideClientHeaders 是否已赋值
                     * 
                     */
                    bool HideClientHeadersHasBeenSet() const;

                    /**
                     * 获取queuing time
                     * @return LineUpTime queuing time
                     * 
                     */
                    int64_t GetLineUpTime() const;

                    /**
                     * 设置queuing time
                     * @param _lineUpTime queuing time
                     * 
                     */
                    void SetLineUpTime(const int64_t& _lineUpTime);

                    /**
                     * 判断参数 LineUpTime 是否已赋值
                     * @return LineUpTime 是否已赋值
                     * 
                     */
                    bool LineUpTimeHasBeenSet() const;

                    /**
                     * 获取Whether request queuing is enabled
                     * @return IsDelay Whether request queuing is enabled
                     * 
                     */
                    bool GetIsDelay() const;

                    /**
                     * 设置Whether request queuing is enabled
                     * @param _isDelay Whether request queuing is enabled
                     * 
                     */
                    void SetIsDelay(const bool& _isDelay);

                    /**
                     * 判断参数 IsDelay 是否已赋值
                     * @return IsDelay 是否已赋值
                     * 
                     */
                    bool IsDelayHasBeenSet() const;

                    /**
                     * 获取Basic throttling
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BasicLimitQpsThresholds Basic throttling
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<QpsThreshold> GetBasicLimitQpsThresholds() const;

                    /**
                     * 设置Basic throttling
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _basicLimitQpsThresholds Basic throttling
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBasicLimitQpsThresholds(const std::vector<QpsThreshold>& _basicLimitQpsThresholds);

                    /**
                     * 判断参数 BasicLimitQpsThresholds 是否已赋值
                     * @return BasicLimitQpsThresholds 是否已赋值
                     * 
                     */
                    bool BasicLimitQpsThresholdsHasBeenSet() const;

                    /**
                     * 获取Parameter throttling policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LimitRules Parameter throttling policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LimitRule> GetLimitRules() const;

                    /**
                     * 设置Parameter throttling policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _limitRules Parameter throttling policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLimitRules(const std::vector<LimitRule>& _limitRules);

                    /**
                     * 判断参数 LimitRules 是否已赋值
                     * @return LimitRules 是否已赋值
                     * 
                     */
                    bool LimitRulesHasBeenSet() const;

                private:

                    /**
                     * Plug-in enable status
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * qps threshold
                     */
                    std::vector<QpsThreshold> m_qpsThresholds;
                    bool m_qpsThresholdsHasBeenSet;

                    /**
                     * Request path that requires traffic control
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Request header Key for traffic control
                     */
                    std::string m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * Traffic throttling basis
ip service consumer credential path header
                     */
                    std::string m_limitBy;
                    bool m_limitByHasBeenSet;

                    /**
                     * external redis configuration
                     */
                    ExternalRedis m_externalRedis;
                    bool m_externalRedisHasBeenSet;

                    /**
                     * redis configuration in global configuration
                     */
                    std::string m_globalConfigId;
                    bool m_globalConfigIdHasBeenSet;

                    /**
                     * Counter policy 
local standalone
default redis
external redis

                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Response configuration, response policy is text

                     */
                    RateLimitResponse m_rateLimitResponse;
                    bool m_rateLimitResponseHasBeenSet;

                    /**
                     * Request forwarding address
                     */
                    std::string m_rateLimitResponseUrl;
                    bool m_rateLimitResponseUrlHasBeenSet;

                    /**
                     * response policy
url request forwarding
Response configuration
default mode: return directly.

                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * Whether to hide the traffic throttling client response header
                     */
                    bool m_hideClientHeaders;
                    bool m_hideClientHeadersHasBeenSet;

                    /**
                     * queuing time
                     */
                    int64_t m_lineUpTime;
                    bool m_lineUpTimeHasBeenSet;

                    /**
                     * Whether request queuing is enabled
                     */
                    bool m_isDelay;
                    bool m_isDelayHasBeenSet;

                    /**
                     * Basic throttling
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QpsThreshold> m_basicLimitQpsThresholds;
                    bool m_basicLimitQpsThresholdsHasBeenSet;

                    /**
                     * Parameter throttling policy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LimitRule> m_limitRules;
                    bool m_limitRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYRATELIMITDETAIL_H_
