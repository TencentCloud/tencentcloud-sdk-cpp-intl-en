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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LOCALDISKTYPE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LOCALDISKTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes local disk specifications.
                */
                class LocalDiskType : public AbstractModel
                {
                public:
                    LocalDiskType();
                    ~LocalDiskType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of a local disk.
                     * @return Type Type of a local disk.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of a local disk.
                     * @param Type Type of a local disk.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Attributes of a local disk.
                     * @return PartitionType Attributes of a local disk.
                     */
                    std::string GetPartitionType() const;

                    /**
                     * 设置Attributes of a local disk.
                     * @param PartitionType Attributes of a local disk.
                     */
                    void SetPartitionType(const std::string& _partitionType);

                    /**
                     * 判断参数 PartitionType 是否已赋值
                     * @return PartitionType 是否已赋值
                     */
                    bool PartitionTypeHasBeenSet() const;

                    /**
                     * 获取Minimum size of a local disk.
                     * @return MinSize Minimum size of a local disk.
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置Minimum size of a local disk.
                     * @param MinSize Minimum size of a local disk.
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Maximum size of a local disk.
                     * @return MaxSize Maximum size of a local disk.
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum size of a local disk.
                     * @param MaxSize Maximum size of a local disk.
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取Whether a local disk is required during purchase. Valid values:<br><li>REQUIRED: required<br><li>OPTIONAL: optional
                     * @return Required Whether a local disk is required during purchase. Valid values:<br><li>REQUIRED: required<br><li>OPTIONAL: optional
                     */
                    std::string GetRequired() const;

                    /**
                     * 设置Whether a local disk is required during purchase. Valid values:<br><li>REQUIRED: required<br><li>OPTIONAL: optional
                     * @param Required Whether a local disk is required during purchase. Valid values:<br><li>REQUIRED: required<br><li>OPTIONAL: optional
                     */
                    void SetRequired(const std::string& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     */
                    bool RequiredHasBeenSet() const;

                private:

                    /**
                     * Type of a local disk.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Attributes of a local disk.
                     */
                    std::string m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * Minimum size of a local disk.
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Maximum size of a local disk.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Whether a local disk is required during purchase. Valid values:<br><li>REQUIRED: required<br><li>OPTIONAL: optional
                     */
                    std::string m_required;
                    bool m_requiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LOCALDISKTYPE_H_
