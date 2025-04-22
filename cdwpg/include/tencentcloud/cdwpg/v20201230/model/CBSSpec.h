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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CBSSPEC_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CBSSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Disk specifications.
                */
                class CBSSpec : public AbstractModel
                {
                public:
                    CBSSpec();
                    ~CBSSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disk type.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskType Disk type.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskType Disk type.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Size.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskSize Size.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Size.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskSize Size.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskCount Number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置Number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskCount Number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                private:

                    /**
                     * Disk type.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Size.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Number.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CBSSPEC_H_
