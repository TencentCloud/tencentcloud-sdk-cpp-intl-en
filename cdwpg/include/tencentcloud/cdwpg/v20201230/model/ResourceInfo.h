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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_RESOURCEINFO_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_RESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/CBSSpecInfo.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Resource information.
                */
                class ResourceInfo : public AbstractModel
                {
                public:
                    ResourceInfo();
                    ~ResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecName Resource name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Resource name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specName Resource name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Resource count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Resource count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Resource count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _count Resource count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Disk information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskSpec Disk information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CBSSpecInfo GetDiskSpec() const;

                    /**
                     * 设置Disk information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskSpec Disk information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskSpec(const CBSSpecInfo& _diskSpec);

                    /**
                     * 判断参数 DiskSpec 是否已赋值
                     * @return DiskSpec 是否已赋值
                     * 
                     */
                    bool DiskSpecHasBeenSet() const;

                    /**
                     * 获取Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Resource name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Resource count.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Disk information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CBSSpecInfo m_diskSpec;
                    bool m_diskSpecHasBeenSet;

                    /**
                     * Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_RESOURCEINFO_H_
