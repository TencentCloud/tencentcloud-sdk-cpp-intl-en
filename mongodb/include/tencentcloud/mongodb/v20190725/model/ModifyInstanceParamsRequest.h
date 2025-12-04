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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEPARAMSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyMongoDBParamType.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyInstanceParams request structure.
                */
                class ModifyInstanceParamsRequest : public AbstractModel
                {
                public:
                    ModifyInstanceParamsRequest();
                    ~ModifyInstanceParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * @return InstanceId Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * @param _instanceId Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the parameter name and value to be modified. For details about the currently supported parameter names and the corresponding valid values, see [DescribeInstanceParams](https://www.tencentcloud.comom/document/product/240/65903?from_cn_redirect=1).
                     * @return InstanceParams Specifies the parameter name and value to be modified. For details about the currently supported parameter names and the corresponding valid values, see [DescribeInstanceParams](https://www.tencentcloud.comom/document/product/240/65903?from_cn_redirect=1).
                     * 
                     */
                    std::vector<ModifyMongoDBParamType> GetInstanceParams() const;

                    /**
                     * 设置Specifies the parameter name and value to be modified. For details about the currently supported parameter names and the corresponding valid values, see [DescribeInstanceParams](https://www.tencentcloud.comom/document/product/240/65903?from_cn_redirect=1).
                     * @param _instanceParams Specifies the parameter name and value to be modified. For details about the currently supported parameter names and the corresponding valid values, see [DescribeInstanceParams](https://www.tencentcloud.comom/document/product/240/65903?from_cn_redirect=1).
                     * 
                     */
                    void SetInstanceParams(const std::vector<ModifyMongoDBParamType>& _instanceParams);

                    /**
                     * 判断参数 InstanceParams 是否已赋值
                     * @return InstanceParams 是否已赋值
                     * 
                     */
                    bool InstanceParamsHasBeenSet() const;

                    /**
                     * 获取Operation type. Valid values:
- IMMEDIATELY: immediate adjustment.
- DELAY: delayed adjustment. It is an optional field. The default value is immediate adjustment if this parameter is left unspecified.
                     * @return ModifyType Operation type. Valid values:
- IMMEDIATELY: immediate adjustment.
- DELAY: delayed adjustment. It is an optional field. The default value is immediate adjustment if this parameter is left unspecified.
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置Operation type. Valid values:
- IMMEDIATELY: immediate adjustment.
- DELAY: delayed adjustment. It is an optional field. The default value is immediate adjustment if this parameter is left unspecified.
                     * @param _modifyType Operation type. Valid values:
- IMMEDIATELY: immediate adjustment.
- DELAY: delayed adjustment. It is an optional field. The default value is immediate adjustment if this parameter is left unspecified.
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the parameter name and value to be modified. For details about the currently supported parameter names and the corresponding valid values, see [DescribeInstanceParams](https://www.tencentcloud.comom/document/product/240/65903?from_cn_redirect=1).
                     */
                    std::vector<ModifyMongoDBParamType> m_instanceParams;
                    bool m_instanceParamsHasBeenSet;

                    /**
                     * Operation type. Valid values:
- IMMEDIATELY: immediate adjustment.
- DELAY: delayed adjustment. It is an optional field. The default value is immediate adjustment if this parameter is left unspecified.
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEPARAMSREQUEST_H_
