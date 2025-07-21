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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HTTPDDOSPROTECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HTTPDDOSPROTECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdaptiveFrequencyControl.h>
#include <tencentcloud/teo/v20220901/model/ClientFiltering.h>
#include <tencentcloud/teo/v20220901/model/BandwidthAbuseDefense.h>
#include <tencentcloud/teo/v20220901/model/SlowAttackDefense.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * HTTP DDOS protection configuration.
                */
                class HttpDDoSProtection : public AbstractModel
                {
                public:
                    HttpDDoSProtection();
                    ~HttpDDoSProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the specific configuration of adaptive frequency control.
                     * @return AdaptiveFrequencyControl Specifies the specific configuration of adaptive frequency control.
                     * 
                     */
                    AdaptiveFrequencyControl GetAdaptiveFrequencyControl() const;

                    /**
                     * 设置Specifies the specific configuration of adaptive frequency control.
                     * @param _adaptiveFrequencyControl Specifies the specific configuration of adaptive frequency control.
                     * 
                     */
                    void SetAdaptiveFrequencyControl(const AdaptiveFrequencyControl& _adaptiveFrequencyControl);

                    /**
                     * 判断参数 AdaptiveFrequencyControl 是否已赋值
                     * @return AdaptiveFrequencyControl 是否已赋值
                     * 
                     */
                    bool AdaptiveFrequencyControlHasBeenSet() const;

                    /**
                     * 获取Specifies the intelligent client filter configuration.
                     * @return ClientFiltering Specifies the intelligent client filter configuration.
                     * 
                     */
                    ClientFiltering GetClientFiltering() const;

                    /**
                     * 设置Specifies the intelligent client filter configuration.
                     * @param _clientFiltering Specifies the intelligent client filter configuration.
                     * 
                     */
                    void SetClientFiltering(const ClientFiltering& _clientFiltering);

                    /**
                     * 判断参数 ClientFiltering 是否已赋值
                     * @return ClientFiltering 是否已赋值
                     * 
                     */
                    bool ClientFilteringHasBeenSet() const;

                    /**
                     * 获取Specifies the specific configuration for bandwidth abuse protection.
                     * @return BandwidthAbuseDefense Specifies the specific configuration for bandwidth abuse protection.
                     * 
                     */
                    BandwidthAbuseDefense GetBandwidthAbuseDefense() const;

                    /**
                     * 设置Specifies the specific configuration for bandwidth abuse protection.
                     * @param _bandwidthAbuseDefense Specifies the specific configuration for bandwidth abuse protection.
                     * 
                     */
                    void SetBandwidthAbuseDefense(const BandwidthAbuseDefense& _bandwidthAbuseDefense);

                    /**
                     * 判断参数 BandwidthAbuseDefense 是否已赋值
                     * @return BandwidthAbuseDefense 是否已赋值
                     * 
                     */
                    bool BandwidthAbuseDefenseHasBeenSet() const;

                    /**
                     * 获取Specifies the configuration of slow attack protection.
                     * @return SlowAttackDefense Specifies the configuration of slow attack protection.
                     * 
                     */
                    SlowAttackDefense GetSlowAttackDefense() const;

                    /**
                     * 设置Specifies the configuration of slow attack protection.
                     * @param _slowAttackDefense Specifies the configuration of slow attack protection.
                     * 
                     */
                    void SetSlowAttackDefense(const SlowAttackDefense& _slowAttackDefense);

                    /**
                     * 判断参数 SlowAttackDefense 是否已赋值
                     * @return SlowAttackDefense 是否已赋值
                     * 
                     */
                    bool SlowAttackDefenseHasBeenSet() const;

                private:

                    /**
                     * Specifies the specific configuration of adaptive frequency control.
                     */
                    AdaptiveFrequencyControl m_adaptiveFrequencyControl;
                    bool m_adaptiveFrequencyControlHasBeenSet;

                    /**
                     * Specifies the intelligent client filter configuration.
                     */
                    ClientFiltering m_clientFiltering;
                    bool m_clientFilteringHasBeenSet;

                    /**
                     * Specifies the specific configuration for bandwidth abuse protection.
                     */
                    BandwidthAbuseDefense m_bandwidthAbuseDefense;
                    bool m_bandwidthAbuseDefenseHasBeenSet;

                    /**
                     * Specifies the configuration of slow attack protection.
                     */
                    SlowAttackDefense m_slowAttackDefense;
                    bool m_slowAttackDefenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HTTPDDOSPROTECTION_H_
