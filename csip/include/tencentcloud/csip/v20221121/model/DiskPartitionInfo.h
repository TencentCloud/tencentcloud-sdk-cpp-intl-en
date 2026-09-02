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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DISKPARTITIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DISKPARTITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Disk partition information
                */
                class DiskPartitionInfo : public AbstractModel
                {
                public:
                    DiskPartitionInfo();
                    ~DiskPartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Partition name</p>
                     * @return Name <p>Partition name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Partition name</p>
                     * @param _name <p>Partition name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Mount path</p>
                     * @return Path <p>Mount path</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Mount path</p>
                     * @param _path <p>Mount path</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Usage percentage</p>
                     * @return Percent <p>Usage percentage</p>
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置<p>Usage percentage</p>
                     * @param _percent <p>Usage percentage</p>
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取<p>Partition size (MB)</p>
                     * @return Size <p>Partition size (MB)</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>Partition size (MB)</p>
                     * @param _size <p>Partition size (MB)</p>
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>Partition type</p>
                     * @return Type <p>Partition type</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Partition type</p>
                     * @param _type <p>Partition type</p>
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
                     * 获取<p>Used (MB)</p>
                     * @return Used <p>Used (MB)</p>
                     * 
                     */
                    uint64_t GetUsed() const;

                    /**
                     * 设置<p>Used (MB)</p>
                     * @param _used <p>Used (MB)</p>
                     * 
                     */
                    void SetUsed(const uint64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * <p>Partition name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Mount path</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Usage percentage</p>
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>Partition size (MB)</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>Partition type</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Used (MB)</p>
                     */
                    uint64_t m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DISKPARTITIONINFO_H_
