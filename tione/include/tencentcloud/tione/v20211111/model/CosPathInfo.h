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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_COSPATHINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_COSPATHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * COS path information.
                */
                class CosPathInfo : public AbstractModel
                {
                public:
                    CosPathInfo();
                    ~CosPathInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bucket.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bucket Bucket.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bucket Bucket.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Path list. Only one path is supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Paths Path list. Only one path is supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置Path list. Only one path is supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paths Path list. Only one path is supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * Bucket.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Region.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Path list. Only one path is supported.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_COSPATHINFO_H_
