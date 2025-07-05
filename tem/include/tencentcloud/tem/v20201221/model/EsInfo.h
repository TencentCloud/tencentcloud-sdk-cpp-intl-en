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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_ESINFO_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_ESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * Auto scaling configuration
                */
                class EsInfo : public AbstractModel
                {
                public:
                    EsInfo();
                    ~EsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum number of instances
                     * @return MinAliveInstances Minimum number of instances
                     * 
                     */
                    int64_t GetMinAliveInstances() const;

                    /**
                     * 设置Minimum number of instances
                     * @param _minAliveInstances Minimum number of instances
                     * 
                     */
                    void SetMinAliveInstances(const int64_t& _minAliveInstances);

                    /**
                     * 判断参数 MinAliveInstances 是否已赋值
                     * @return MinAliveInstances 是否已赋值
                     * 
                     */
                    bool MinAliveInstancesHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances
                     * @return MaxAliveInstances Maximum number of instances
                     * 
                     */
                    int64_t GetMaxAliveInstances() const;

                    /**
                     * 设置Maximum number of instances
                     * @param _maxAliveInstances Maximum number of instances
                     * 
                     */
                    void SetMaxAliveInstances(const int64_t& _maxAliveInstances);

                    /**
                     * 判断参数 MaxAliveInstances 是否已赋值
                     * @return MaxAliveInstances 是否已赋值
                     * 
                     */
                    bool MaxAliveInstancesHasBeenSet() const;

                    /**
                     * 获取Auto scaling policy. 1: CPU; 2: memory
                     * @return EsStrategy Auto scaling policy. 1: CPU; 2: memory
                     * 
                     */
                    int64_t GetEsStrategy() const;

                    /**
                     * 设置Auto scaling policy. 1: CPU; 2: memory
                     * @param _esStrategy Auto scaling policy. 1: CPU; 2: memory
                     * 
                     */
                    void SetEsStrategy(const int64_t& _esStrategy);

                    /**
                     * 判断参数 EsStrategy 是否已赋值
                     * @return EsStrategy 是否已赋值
                     * 
                     */
                    bool EsStrategyHasBeenSet() const;

                    /**
                     * 获取Auto scaling condition value
                     * @return Threshold Auto scaling condition value
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置Auto scaling condition value
                     * @param _threshold Auto scaling condition value
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Version ID
                     * @return VersionId Version ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Version ID
                     * @param _versionId Version ID
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * Minimum number of instances
                     */
                    int64_t m_minAliveInstances;
                    bool m_minAliveInstancesHasBeenSet;

                    /**
                     * Maximum number of instances
                     */
                    int64_t m_maxAliveInstances;
                    bool m_maxAliveInstancesHasBeenSet;

                    /**
                     * Auto scaling policy. 1: CPU; 2: memory
                     */
                    int64_t m_esStrategy;
                    bool m_esStrategyHasBeenSet;

                    /**
                     * Auto scaling condition value
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Version ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_ESINFO_H_
