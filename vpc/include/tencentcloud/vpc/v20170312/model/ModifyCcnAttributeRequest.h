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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyCcnAttribute request structure.
                */
                class ModifyCcnAttributeRequest : public AbstractModel
                {
                public:
                    ModifyCcnAttributeRequest();
                    ~ModifyCcnAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The CCN instance ID, such as `ccn-f49l6u0z`.
                     * @return CcnId The CCN instance ID, such as `ccn-f49l6u0z`.
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The CCN instance ID, such as `ccn-f49l6u0z`.
                     * @param _ccnId The CCN instance ID, such as `ccn-f49l6u0z`.
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The name of CCN instance. Up to 60 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     * @return CcnName The name of CCN instance. Up to 60 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     * 
                     */
                    std::string GetCcnName() const;

                    /**
                     * 设置The name of CCN instance. Up to 60 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     * @param _ccnName The name of CCN instance. Up to 60 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     * 
                     */
                    void SetCcnName(const std::string& _ccnName);

                    /**
                     * 判断参数 CcnName 是否已赋值
                     * @return CcnName 是否已赋值
                     * 
                     */
                    bool CcnNameHasBeenSet() const;

                    /**
                     * 获取The description of CCN instance. Up to 100 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     * @return CcnDescription The description of CCN instance. Up to 100 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     * 
                     */
                    std::string GetCcnDescription() const;

                    /**
                     * 设置The description of CCN instance. Up to 100 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     * @param _ccnDescription The description of CCN instance. Up to 100 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     * 
                     */
                    void SetCcnDescription(const std::string& _ccnDescription);

                    /**
                     * 判断参数 CcnDescription 是否已赋值
                     * @return CcnDescription 是否已赋值
                     * 
                     */
                    bool CcnDescriptionHasBeenSet() const;

                private:

                    /**
                     * The CCN instance ID, such as `ccn-f49l6u0z`.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The name of CCN instance. Up to 60 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     */
                    std::string m_ccnName;
                    bool m_ccnNameHasBeenSet;

                    /**
                     * The description of CCN instance. Up to 100 characters allowed. It can contain up to 60 bytes. Either `CcnName` or `CcnDescription` must be specified.
                     */
                    std::string m_ccnDescription;
                    bool m_ccnDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNATTRIBUTEREQUEST_H_
