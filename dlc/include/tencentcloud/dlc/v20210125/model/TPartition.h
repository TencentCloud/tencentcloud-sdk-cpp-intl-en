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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TPARTITION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TPARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Table partition information
                */
                class TPartition : public AbstractModel
                {
                public:
                    TPartition();
                    ~TPartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The field name.
                     * @return Name The field name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The field name.
                     * @param _name The field name.
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
                     * 获取The field type.
                     * @return Type The field type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The field type.
                     * @param _type The field type.
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
                     * 获取The field description.
                     * @return Comment The field description.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置The field description.
                     * @param _comment The field description.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取The partition type.
                     * @return PartitionType The partition type.
                     * 
                     */
                    std::string GetPartitionType() const;

                    /**
                     * 设置The partition type.
                     * @param _partitionType The partition type.
                     * 
                     */
                    void SetPartitionType(const std::string& _partitionType);

                    /**
                     * 判断参数 PartitionType 是否已赋值
                     * @return PartitionType 是否已赋值
                     * 
                     */
                    bool PartitionTypeHasBeenSet() const;

                    /**
                     * 获取The partition format.
                     * @return PartitionFormat The partition format.
                     * 
                     */
                    std::string GetPartitionFormat() const;

                    /**
                     * 设置The partition format.
                     * @param _partitionFormat The partition format.
                     * 
                     */
                    void SetPartitionFormat(const std::string& _partitionFormat);

                    /**
                     * 判断参数 PartitionFormat 是否已赋值
                     * @return PartitionFormat 是否已赋值
                     * 
                     */
                    bool PartitionFormatHasBeenSet() const;

                    /**
                     * 获取The separator count of the partition conversion policy.
                     * @return PartitionDot The separator count of the partition conversion policy.
                     * 
                     */
                    int64_t GetPartitionDot() const;

                    /**
                     * 设置The separator count of the partition conversion policy.
                     * @param _partitionDot The separator count of the partition conversion policy.
                     * 
                     */
                    void SetPartitionDot(const int64_t& _partitionDot);

                    /**
                     * 判断参数 PartitionDot 是否已赋值
                     * @return PartitionDot 是否已赋值
                     * 
                     */
                    bool PartitionDotHasBeenSet() const;

                    /**
                     * 获取The partition conversion policy.
                     * @return Transform The partition conversion policy.
                     * 
                     */
                    std::string GetTransform() const;

                    /**
                     * 设置The partition conversion policy.
                     * @param _transform The partition conversion policy.
                     * 
                     */
                    void SetTransform(const std::string& _transform);

                    /**
                     * 判断参数 Transform 是否已赋值
                     * @return Transform 是否已赋值
                     * 
                     */
                    bool TransformHasBeenSet() const;

                    /**
                     * 获取The policy parameters.
                     * @return TransformArgs The policy parameters.
                     * 
                     */
                    std::vector<std::string> GetTransformArgs() const;

                    /**
                     * 设置The policy parameters.
                     * @param _transformArgs The policy parameters.
                     * 
                     */
                    void SetTransformArgs(const std::vector<std::string>& _transformArgs);

                    /**
                     * 判断参数 TransformArgs 是否已赋值
                     * @return TransformArgs 是否已赋值
                     * 
                     */
                    bool TransformArgsHasBeenSet() const;

                private:

                    /**
                     * The field name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The field type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The field description.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * The partition type.
                     */
                    std::string m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * The partition format.
                     */
                    std::string m_partitionFormat;
                    bool m_partitionFormatHasBeenSet;

                    /**
                     * The separator count of the partition conversion policy.
                     */
                    int64_t m_partitionDot;
                    bool m_partitionDotHasBeenSet;

                    /**
                     * The partition conversion policy.
                     */
                    std::string m_transform;
                    bool m_transformHasBeenSet;

                    /**
                     * The policy parameters.
                     */
                    std::vector<std::string> m_transformArgs;
                    bool m_transformArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TPARTITION_H_
