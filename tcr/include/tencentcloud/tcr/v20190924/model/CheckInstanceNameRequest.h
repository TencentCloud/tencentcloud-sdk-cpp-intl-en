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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CHECKINSTANCENAMEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CHECKINSTANCENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CheckInstanceName request structure.
                */
                class CheckInstanceNameRequest : public AbstractModel
                {
                public:
                    CheckInstanceNameRequest();
                    ~CheckInstanceNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the instance to be created
                     * @return RegistryName Name of the instance to be created
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置Name of the instance to be created
                     * @param RegistryName Name of the instance to be created
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     */
                    bool RegistryNameHasBeenSet() const;

                private:

                    /**
                     * Name of the instance to be created
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CHECKINSTANCENAMEREQUEST_H_
