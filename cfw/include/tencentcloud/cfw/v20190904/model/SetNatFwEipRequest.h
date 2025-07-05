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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWEIPREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWEIPREQUEST_H_

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
                * SetNatFwEip request structure.
                */
                class SetNatFwEipRequest : public AbstractModel
                {
                public:
                    SetNatFwEipRequest();
                    ~SetNatFwEipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取bind: bind EIP; unbind: unbind EIP; newAdd: add firewall EIP
                     * @return OperationType bind: bind EIP; unbind: unbind EIP; newAdd: add firewall EIP
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置bind: bind EIP; unbind: unbind EIP; newAdd: add firewall EIP
                     * @param _operationType bind: bind EIP; unbind: unbind EIP; newAdd: add firewall EIP
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取Firewall instance ID
                     * @return CfwInstance Firewall instance ID
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置Firewall instance ID
                     * @param _cfwInstance Firewall instance ID
                     * 
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     * 
                     */
                    bool CfwInstanceHasBeenSet() const;

                    /**
                     * 获取This field is required when OperationType is "bind" or "unbind".
                     * @return EipList This field is required when OperationType is "bind" or "unbind".
                     * 
                     */
                    std::vector<std::string> GetEipList() const;

                    /**
                     * 设置This field is required when OperationType is "bind" or "unbind".
                     * @param _eipList This field is required when OperationType is "bind" or "unbind".
                     * 
                     */
                    void SetEipList(const std::vector<std::string>& _eipList);

                    /**
                     * 判断参数 EipList 是否已赋值
                     * @return EipList 是否已赋值
                     * 
                     */
                    bool EipListHasBeenSet() const;

                private:

                    /**
                     * bind: bind EIP; unbind: unbind EIP; newAdd: add firewall EIP
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * Firewall instance ID
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * This field is required when OperationType is "bind" or "unbind".
                     */
                    std::vector<std::string> m_eipList;
                    bool m_eipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWEIPREQUEST_H_
