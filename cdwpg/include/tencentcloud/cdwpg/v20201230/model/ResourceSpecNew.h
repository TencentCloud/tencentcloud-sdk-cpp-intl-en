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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_RESOURCESPECNEW_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_RESOURCESPECNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/CBSSpec.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Resource specifications.
                */
                class ResourceSpecNew : public AbstractModel
                {
                public:
                    ResourceSpecNew();
                    ~ResourceSpecNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource name.
                     * @return SpecName Resource name.
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Resource name.
                     * @param _specName Resource name.
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
                     * @return Count Resource count.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Resource count.
                     * @param _count Resource count.
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
                     * @return DiskSpec Disk information.
                     * 
                     */
                    CBSSpec GetDiskSpec() const;

                    /**
                     * 设置Disk information.
                     * @param _diskSpec Disk information.
                     * 
                     */
                    void SetDiskSpec(const CBSSpec& _diskSpec);

                    /**
                     * 判断参数 DiskSpec 是否已赋值
                     * @return DiskSpec 是否已赋值
                     * 
                     */
                    bool DiskSpecHasBeenSet() const;

                    /**
                     * 获取Resource type, DATA.
                     * @return Type Resource type, DATA.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Resource type, DATA.
                     * @param _type Resource type, DATA.
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
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Resource count.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Disk information.
                     */
                    CBSSpec m_diskSpec;
                    bool m_diskSpecHasBeenSet;

                    /**
                     * Resource type, DATA.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_RESOURCESPECNEW_H_
