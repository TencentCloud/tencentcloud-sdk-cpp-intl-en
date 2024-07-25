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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEVOLUMEREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEVOLUMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * CreateVolume request structure.
                */
                class CreateVolumeRequest : public AbstractModel
                {
                public:
                    CreateVolumeRequest();
                    ~CreateVolumeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param _environmentId Environment ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Volume type. Valid values:
* SHARED: Multi-point mount shared storage
                     * @return Type Volume type. Valid values:
* SHARED: Multi-point mount shared storage
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Volume type. Valid values:
* SHARED: Multi-point mount shared storage
                     * @param _type Volume type. Valid values:
* SHARED: Multi-point mount shared storage
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
                     * 获取Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     * @return Spec Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     * @param _spec Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取Volume size (GB), which is required to be specified for the Turbo series.
                     * @return Capacity Volume size (GB), which is required to be specified for the Turbo series.
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置Volume size (GB), which is required to be specified for the Turbo series.
                     * @param _capacity Volume size (GB), which is required to be specified for the Turbo series.
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                private:

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Volume type. Valid values:
* SHARED: Multi-point mount shared storage
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Volume size (GB), which is required to be specified for the Turbo series.
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEVOLUMEREQUEST_H_
