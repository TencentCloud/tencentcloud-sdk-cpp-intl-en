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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_REVOKEDLCCATALOGACCESSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_REVOKEDLCCATALOGACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RevokeDLCCatalogAccess request structure.
                */
                class RevokeDLCCatalogAccessRequest : public AbstractModel
                {
                public:
                    RevokeDLCCatalogAccessRequest();
                    ~RevokeDLCCatalogAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VpcID
                     * @return VpcId VpcID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcID
                     * @param _vpcId VpcID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * VpcID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_REVOKEDLCCATALOGACCESSREQUEST_H_
