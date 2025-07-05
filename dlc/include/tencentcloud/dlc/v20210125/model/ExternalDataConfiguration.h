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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_EXTERNALDATACONFIGURATION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_EXTERNALDATACONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DMSSds.h>
#include <tencentcloud/dlc/v20210125/model/DMSPartition.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * External table configuration
                */
                class ExternalDataConfiguration : public AbstractModel
                {
                public:
                    ExternalDataConfiguration();
                    ~ExternalDataConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metadata storage object
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Sds Metadata storage object
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DMSSds GetSds() const;

                    /**
                     * 设置Metadata storage object
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sds Metadata storage object
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSds(const DMSSds& _sds);

                    /**
                     * 判断参数 Sds 是否已赋值
                     * @return Sds 是否已赋值
                     * 
                     */
                    bool SdsHasBeenSet() const;

                    /**
                     * 获取View text
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ViewOriginalText View text
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetViewOriginalText() const;

                    /**
                     * 设置View text
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _viewOriginalText View text
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetViewOriginalText(const std::string& _viewOriginalText);

                    /**
                     * 判断参数 ViewOriginalText 是否已赋值
                     * @return ViewOriginalText 是否已赋值
                     * 
                     */
                    bool ViewOriginalTextHasBeenSet() const;

                    /**
                     * 获取View text
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ViewExpandedText View text
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetViewExpandedText() const;

                    /**
                     * 设置View text
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _viewExpandedText View text
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetViewExpandedText(const std::string& _viewExpandedText);

                    /**
                     * 判断参数 ViewExpandedText 是否已赋值
                     * @return ViewExpandedText 是否已赋值
                     * 
                     */
                    bool ViewExpandedTextHasBeenSet() const;

                    /**
                     * 获取Hive maintenance version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Retention Hive maintenance version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRetention() const;

                    /**
                     * 设置Hive maintenance version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retention Hive maintenance version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetention(const int64_t& _retention);

                    /**
                     * 判断参数 Retention 是否已赋值
                     * @return Retention 是否已赋值
                     * 
                     */
                    bool RetentionHasBeenSet() const;

                    /**
                     * 获取Lifecycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LifeTime Lifecycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLifeTime() const;

                    /**
                     * 设置Lifecycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lifeTime Lifecycle
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLifeTime(const int64_t& _lifeTime);

                    /**
                     * 判断参数 LifeTime 是否已赋值
                     * @return LifeTime 是否已赋值
                     * 
                     */
                    bool LifeTimeHasBeenSet() const;

                    /**
                     * 获取Partition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Partitions Partition
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DMSPartition> GetPartitions() const;

                    /**
                     * 设置Partition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitions Partition
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitions(const std::vector<DMSPartition>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                private:

                    /**
                     * Metadata storage object
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DMSSds m_sds;
                    bool m_sdsHasBeenSet;

                    /**
                     * View text
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_viewOriginalText;
                    bool m_viewOriginalTextHasBeenSet;

                    /**
                     * View text
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_viewExpandedText;
                    bool m_viewExpandedTextHasBeenSet;

                    /**
                     * Hive maintenance version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_retention;
                    bool m_retentionHasBeenSet;

                    /**
                     * Lifecycle
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lifeTime;
                    bool m_lifeTimeHasBeenSet;

                    /**
                     * Partition
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DMSPartition> m_partitions;
                    bool m_partitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_EXTERNALDATACONFIGURATION_H_
