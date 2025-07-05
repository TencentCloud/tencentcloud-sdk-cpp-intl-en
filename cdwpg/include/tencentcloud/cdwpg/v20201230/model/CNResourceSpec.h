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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CNRESOURCESPEC_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CNRESOURCESPEC_H_

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
                * Description of resource specifications
                */
                class CNResourceSpec : public AbstractModel
                {
                public:
                    CNResourceSpec();
                    ~CNResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type.
                     * @return Type Node type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Node type.
                     * @param _type Node type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Model.


                     * @return SpecName Model.


                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Model.


                     * @param _specName Model.


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
                     * 获取Number of nodes.
                     * @return Count Number of nodes.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of nodes.
                     * @param _count Number of nodes.
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

                private:

                    /**
                     * Node type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Model.


                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Number of nodes.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Disk information.
                     */
                    CBSSpec m_diskSpec;
                    bool m_diskSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CNRESOURCESPEC_H_
