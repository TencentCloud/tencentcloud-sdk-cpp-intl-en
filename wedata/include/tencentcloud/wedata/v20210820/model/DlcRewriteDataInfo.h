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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCREWRITEDATAINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCREWRITEDATAINFO_H_

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
                * Data Layout Governance Item
                */
                class DlcRewriteDataInfo : public AbstractModel
                {
                public:
                    DlcRewriteDataInfo();
                    ~DlcRewriteDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable data layout governance item: enable (start), disable (do not enable, default)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RewriteDataEnable Whether to enable data layout governance item: enable (start), disable (do not enable, default)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRewriteDataEnable() const;

                    /**
                     * 设置Whether to enable data layout governance item: enable (start), disable (do not enable, default)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _rewriteDataEnable Whether to enable data layout governance item: enable (start), disable (do not enable, default)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRewriteDataEnable(const std::string& _rewriteDataEnable);

                    /**
                     * 判断参数 RewriteDataEnable 是否已赋值
                     * @return RewriteDataEnable 是否已赋值
                     * 
                     */
                    bool RewriteDataEnableHasBeenSet() const;

                    /**
                     * 获取Engine name used to run data layout governance item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Engine Engine name used to run data layout governance item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Engine name used to run data layout governance item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _engine Engine name used to run data layout governance item
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
                     * 获取Number of files executed by the rearrangement task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MinInputFiles Number of files executed by the rearrangement task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMinInputFiles() const;

                    /**
                     * 设置Number of files executed by the rearrangement task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _minInputFiles Number of files executed by the rearrangement task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMinInputFiles(const uint64_t& _minInputFiles);

                    /**
                     * 判断参数 MinInputFiles 是否已赋值
                     * @return MinInputFiles 是否已赋值
                     * 
                     */
                    bool MinInputFilesHasBeenSet() const;

                    /**
                     * 获取Data file size after data rearrangement, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TargetFileSizeBytes Data file size after data rearrangement, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTargetFileSizeBytes() const;

                    /**
                     * 设置Data file size after data rearrangement, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _targetFileSizeBytes Data file size after data rearrangement, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTargetFileSizeBytes(const uint64_t& _targetFileSizeBytes);

                    /**
                     * 判断参数 TargetFileSizeBytes 是否已赋值
                     * @return TargetFileSizeBytes 是否已赋值
                     * 
                     */
                    bool TargetFileSizeBytesHasBeenSet() const;

                    /**
                     * 获取Data layout governance runtime cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IntervalMin Data layout governance runtime cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetIntervalMin() const;

                    /**
                     * 设置Data layout governance runtime cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _intervalMin Data layout governance runtime cycle, in minutes
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
                     * Whether to enable data layout governance item: enable (start), disable (do not enable, default)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_rewriteDataEnable;
                    bool m_rewriteDataEnableHasBeenSet;

                    /**
                     * Engine name used to run data layout governance item
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Number of files executed by the rearrangement task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_minInputFiles;
                    bool m_minInputFilesHasBeenSet;

                    /**
                     * Data file size after data rearrangement, in bytes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_targetFileSizeBytes;
                    bool m_targetFileSizeBytesHasBeenSet;

                    /**
                     * Data layout governance runtime cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_intervalMin;
                    bool m_intervalMinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCREWRITEDATAINFO_H_
