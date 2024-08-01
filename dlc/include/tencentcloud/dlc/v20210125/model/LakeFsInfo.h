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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFSINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFSINFO_H_

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
                * Describe basic information about DLC managed storage
                */
                class LakeFsInfo : public AbstractModel
                {
                public:
                    LakeFsInfo();
                    ~LakeFsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Managed storage name
                     * @return Name Managed storage name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Managed storage name
                     * @param _name Managed storage name
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
                     * 获取Managed storage type
                     * @return Type Managed storage type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Managed storage type
                     * @param _type Managed storage type
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
                     * 获取Capacity
                     * @return SpaceUsedSize Capacity
                     * 
                     */
                    double GetSpaceUsedSize() const;

                    /**
                     * 设置Capacity
                     * @param _spaceUsedSize Capacity
                     * 
                     */
                    void SetSpaceUsedSize(const double& _spaceUsedSize);

                    /**
                     * 判断参数 SpaceUsedSize 是否已赋值
                     * @return SpaceUsedSize 是否已赋值
                     * 
                     */
                    bool SpaceUsedSizeHasBeenSet() const;

                    /**
                     * 获取Timestamp of the creation time
                     * @return CreateTimeStamp Timestamp of the creation time
                     * 
                     */
                    int64_t GetCreateTimeStamp() const;

                    /**
                     * 设置Timestamp of the creation time
                     * @param _createTimeStamp Timestamp of the creation time
                     * 
                     */
                    void SetCreateTimeStamp(const int64_t& _createTimeStamp);

                    /**
                     * 判断参数 CreateTimeStamp 是否已赋值
                     * @return CreateTimeStamp 是否已赋值
                     * 
                     */
                    bool CreateTimeStampHasBeenSet() const;

                private:

                    /**
                     * Managed storage name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Managed storage type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Capacity
                     */
                    double m_spaceUsedSize;
                    bool m_spaceUsedSizeHasBeenSet;

                    /**
                     * Timestamp of the creation time
                     */
                    int64_t m_createTimeStamp;
                    bool m_createTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFSINFO_H_
