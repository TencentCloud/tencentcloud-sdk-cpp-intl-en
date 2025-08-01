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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYRUNSYNCASSETREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYRUNSYNCASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyRunSyncAsset request structure.
                */
                class ModifyRunSyncAssetRequest : public AbstractModel
                {
                public:
                    ModifyRunSyncAssetRequest();
                    ~ModifyRunSyncAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0: edge firewall toggle; 1: VPC firewall toggle
                     * @return Type 0: edge firewall toggle; 1: VPC firewall toggle
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0: edge firewall toggle; 1: VPC firewall toggle
                     * @param _type 0: edge firewall toggle; 1: VPC firewall toggle
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 0: edge firewall toggle; 1: VPC firewall toggle
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYRUNSYNCASSETREQUEST_H_
