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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DMSCOLUMN_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DMSCOLUMN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Migrating column objects
                */
                class DMSColumn : public AbstractModel
                {
                public:
                    DMSColumn();
                    ~DMSColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Type
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

                    /**
                     * 获取Sort
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Position Sort
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置Sort
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _position Sort
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Params Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KVPair> GetParams() const;

                    /**
                     * 设置Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _params Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParams(const std::vector<KVPair>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Business parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BizParams Business parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KVPair> GetBizParams() const;

                    /**
                     * 设置Business parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bizParams Business parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBizParams(const std::vector<KVPair>& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     * 
                     */
                    bool BizParamsHasBeenSet() const;

                    /**
                     * 获取Whether partitioned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPartition Whether partitioned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置Whether partitioned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPartition Whether partitioned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsPartition(const bool& _isPartition);

                    /**
                     * 判断参数 IsPartition 是否已赋值
                     * @return IsPartition 是否已赋值
                     * 
                     */
                    bool IsPartitionHasBeenSet() const;

                private:

                    /**
                     * Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Sort
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Additional Parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KVPair> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Business parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KVPair> m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * Whether partitioned
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DMSCOLUMN_H_
