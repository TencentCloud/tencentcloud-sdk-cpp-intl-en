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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKTOPREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKTOPREQUEST_H_

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
                * ModifyBlockTop request structure.
                */
                class ModifyBlockTopRequest : public AbstractModel
                {
                public:
                    ModifyBlockTopRequest();
                    ~ModifyBlockTopRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Record ID
                     * @return UniqueId Record ID
                     * 
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置Record ID
                     * @param _uniqueId Record ID
                     * 
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取Operation type. 1: pin to top; 0: unpin
                     * @return OpeType Operation type. 1: pin to top; 0: unpin
                     * 
                     */
                    std::string GetOpeType() const;

                    /**
                     * 设置Operation type. 1: pin to top; 0: unpin
                     * @param _opeType Operation type. 1: pin to top; 0: unpin
                     * 
                     */
                    void SetOpeType(const std::string& _opeType);

                    /**
                     * 判断参数 OpeType 是否已赋值
                     * @return OpeType 是否已赋值
                     * 
                     */
                    bool OpeTypeHasBeenSet() const;

                private:

                    /**
                     * Record ID
                     */
                    std::string m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                    /**
                     * Operation type. 1: pin to top; 0: unpin
                     */
                    std::string m_opeType;
                    bool m_opeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKTOPREQUEST_H_
