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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTSAMPLERATEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTSAMPLERATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCosAuditObjectSampleRate request structure.
                */
                class ModifyCosAuditObjectSampleRateRequest : public AbstractModel
                {
                public:
                    ModifyCosAuditObjectSampleRateRequest();
                    ~ModifyCosAuditObjectSampleRateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Bucket asset id set</p>
                     * @return BucketIdSet <p>Bucket asset id set</p>
                     * 
                     */
                    std::vector<uint64_t> GetBucketIdSet() const;

                    /**
                     * 设置<p>Bucket asset id set</p>
                     * @param _bucketIdSet <p>Bucket asset id set</p>
                     * 
                     */
                    void SetBucketIdSet(const std::vector<uint64_t>& _bucketIdSet);

                    /**
                     * 判断参数 BucketIdSet 是否已赋值
                     * @return BucketIdSet 是否已赋值
                     * 
                     */
                    bool BucketIdSetHasBeenSet() const;

                    /**
                     * 获取<p>Sampling rate collection</p>
                     * @return SampleRateSet <p>Sampling rate collection</p>
                     * 
                     */
                    std::vector<double> GetSampleRateSet() const;

                    /**
                     * 设置<p>Sampling rate collection</p>
                     * @param _sampleRateSet <p>Sampling rate collection</p>
                     * 
                     */
                    void SetSampleRateSet(const std::vector<double>& _sampleRateSet);

                    /**
                     * 判断参数 SampleRateSet 是否已赋值
                     * @return SampleRateSet 是否已赋值
                     * 
                     */
                    bool SampleRateSetHasBeenSet() const;

                    /**
                     * 获取<p>appid; required when passing DefaultSampleRate; selectable when only modifying existing buckets</p>
                     * @return TargetAppId <p>appid; required when passing DefaultSampleRate; selectable when only modifying existing buckets</p>
                     * 
                     */
                    uint64_t GetTargetAppId() const;

                    /**
                     * 设置<p>appid; required when passing DefaultSampleRate; selectable when only modifying existing buckets</p>
                     * @param _targetAppId <p>appid; required when passing DefaultSampleRate; selectable when only modifying existing buckets</p>
                     * 
                     */
                    void SetTargetAppId(const uint64_t& _targetAppId);

                    /**
                     * 判断参数 TargetAppId 是否已赋值
                     * @return TargetAppId 是否已赋值
                     * 
                     */
                    bool TargetAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Modify the default value of the newly-added bucket for TargetAppId when passed in; do not modify the default value when not passed in</p><p>Value range: [0.001, 1]</p>
                     * @return DefaultSampleRate <p>Modify the default value of the newly-added bucket for TargetAppId when passed in; do not modify the default value when not passed in</p><p>Value range: [0.001, 1]</p>
                     * 
                     */
                    double GetDefaultSampleRate() const;

                    /**
                     * 设置<p>Modify the default value of the newly-added bucket for TargetAppId when passed in; do not modify the default value when not passed in</p><p>Value range: [0.001, 1]</p>
                     * @param _defaultSampleRate <p>Modify the default value of the newly-added bucket for TargetAppId when passed in; do not modify the default value when not passed in</p><p>Value range: [0.001, 1]</p>
                     * 
                     */
                    void SetDefaultSampleRate(const double& _defaultSampleRate);

                    /**
                     * 判断参数 DefaultSampleRate 是否已赋值
                     * @return DefaultSampleRate 是否已赋值
                     * 
                     */
                    bool DefaultSampleRateHasBeenSet() const;

                private:

                    /**
                     * <p>Bucket asset id set</p>
                     */
                    std::vector<uint64_t> m_bucketIdSet;
                    bool m_bucketIdSetHasBeenSet;

                    /**
                     * <p>Sampling rate collection</p>
                     */
                    std::vector<double> m_sampleRateSet;
                    bool m_sampleRateSetHasBeenSet;

                    /**
                     * <p>appid; required when passing DefaultSampleRate; selectable when only modifying existing buckets</p>
                     */
                    uint64_t m_targetAppId;
                    bool m_targetAppIdHasBeenSet;

                    /**
                     * <p>Modify the default value of the newly-added bucket for TargetAppId when passed in; do not modify the default value when not passed in</p><p>Value range: [0.001, 1]</p>
                     */
                    double m_defaultSampleRate;
                    bool m_defaultSampleRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTSAMPLERATEREQUEST_H_
