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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPCENDPOINTSERVICEUSER_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPCENDPOINTSERVICEUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Details of allowed endpoint services
                */
                class VpcEndPointServiceUser : public AbstractModel
                {
                public:
                    VpcEndPointServiceUser();
                    ~VpcEndPointServiceUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取APP ID
                     * @return Owner APP ID
                     */
                    uint64_t GetOwner() const;

                    /**
                     * 设置APP ID
                     * @param Owner APP ID
                     */
                    void SetOwner(const uint64_t& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取User UIN
                     * @return UserUin User UIN
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置User UIN
                     * @param UserUin User UIN
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param Description Description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Endpoint service ID
                     * @return EndPointServiceId Endpoint service ID
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置Endpoint service ID
                     * @param EndPointServiceId Endpoint service ID
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                private:

                    /**
                     * APP ID
                     */
                    uint64_t m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Endpoint service ID
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPCENDPOINTSERVICEUSER_H_
