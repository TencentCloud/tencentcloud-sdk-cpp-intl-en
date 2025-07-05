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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCESPEC_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Cluster specifications
                */
                class CreateInstanceSpec : public AbstractModel
                {
                public:
                    CreateInstanceSpec();
                    ~CreateInstanceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification name
                     * @return SpecName Specification name
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Specification name
                     * @param _specName Specification name
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
                     * 获取Quantities
                     * @return Count Quantities
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Quantities
                     * @param _count Quantities
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Cloud disk size
                     * @return DiskSize Cloud disk size
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size
                     * @param _diskSize Cloud disk size
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * Specification name
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Quantities
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Cloud disk size
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEINSTANCESPEC_H_
