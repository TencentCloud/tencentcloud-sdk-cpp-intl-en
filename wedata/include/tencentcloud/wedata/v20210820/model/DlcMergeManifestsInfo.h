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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCMERGEMANIFESTSINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCMERGEMANIFESTSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Merge metadata Manifests governance items
                */
                class DlcMergeManifestsInfo : public AbstractModel
                {
                public:
                    DlcMergeManifestsInfo();
                    ~DlcMergeManifestsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable merging metadata Manifests file governance items: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MergeManifestsEnable Whether to enable merging metadata Manifests file governance items: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMergeManifestsEnable() const;

                    /**
                     * 设置Whether to enable merging metadata Manifests file governance items: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _mergeManifestsEnable Whether to enable merging metadata Manifests file governance items: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMergeManifestsEnable(const std::string& _mergeManifestsEnable);

                    /**
                     * 判断参数 MergeManifestsEnable 是否已赋值
                     * @return MergeManifestsEnable 是否已赋值
                     * 
                     */
                    bool MergeManifestsEnableHasBeenSet() const;

                    /**
                     * 获取Engine name used to run merging metadata Manifests file governance items
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Engine Engine name used to run merging metadata Manifests file governance items
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Engine name used to run merging metadata Manifests file governance items
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _engine Engine name used to run merging metadata Manifests file governance items
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Merge Metadata Manifests file governance runtime cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IntervalMin Merge Metadata Manifests file governance runtime cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetIntervalMin() const;

                    /**
                     * 设置Merge Metadata Manifests file governance runtime cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _intervalMin Merge Metadata Manifests file governance runtime cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIntervalMin(const uint64_t& _intervalMin);

                    /**
                     * 判断参数 IntervalMin 是否已赋值
                     * @return IntervalMin 是否已赋值
                     * 
                     */
                    bool IntervalMinHasBeenSet() const;

                private:

                    /**
                     * Whether to enable merging metadata Manifests file governance items: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_mergeManifestsEnable;
                    bool m_mergeManifestsEnableHasBeenSet;

                    /**
                     * Engine name used to run merging metadata Manifests file governance items
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Merge Metadata Manifests file governance runtime cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_intervalMin;
                    bool m_intervalMinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCMERGEMANIFESTSINFO_H_
