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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBFORWARDCONFIGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBFORWARDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ForwardInstanceInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyLibraDBForwardConfig request structure.
                */
                class ModifyLibraDBForwardConfigRequest : public AbstractModel
                {
                public:
                    ModifyLibraDBForwardConfigRequest();
                    ~ModifyLibraDBForwardConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Read-only analysis engine instance Id
                     * @return InstanceId Read-only analysis engine instance Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Read-only analysis engine instance Id
                     * @param _instanceId Read-only analysis engine instance Id
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
                     * 获取Forwarding Mode
                     * @return ForwardMode Forwarding Mode
                     * 
                     */
                    std::string GetForwardMode() const;

                    /**
                     * 设置Forwarding Mode
                     * @param _forwardMode Forwarding Mode
                     * 
                     */
                    void SetForwardMode(const std::string& _forwardMode);

                    /**
                     * 判断参数 ForwardMode 是否已赋值
                     * @return ForwardMode 是否已赋值
                     * 
                     */
                    bool ForwardModeHasBeenSet() const;

                    /**
                     * 获取Forward instance list
                     * @return ForwardList Forward instance list
                     * 
                     */
                    std::vector<ForwardInstanceInfo> GetForwardList() const;

                    /**
                     * 设置Forward instance list
                     * @param _forwardList Forward instance list
                     * 
                     */
                    void SetForwardList(const std::vector<ForwardInstanceInfo>& _forwardList);

                    /**
                     * 判断参数 ForwardList 是否已赋值
                     * @return ForwardList 是否已赋值
                     * 
                     */
                    bool ForwardListHasBeenSet() const;

                private:

                    /**
                     * Read-only analysis engine instance Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Forwarding Mode
                     */
                    std::string m_forwardMode;
                    bool m_forwardModeHasBeenSet;

                    /**
                     * Forward instance list
                     */
                    std::vector<ForwardInstanceInfo> m_forwardList;
                    bool m_forwardListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBFORWARDCONFIGREQUEST_H_
