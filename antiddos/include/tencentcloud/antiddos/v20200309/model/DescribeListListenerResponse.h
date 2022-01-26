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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTLISTENERRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTLISTENERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/Layer4Rule.h>
#include <tencentcloud/antiddos/v20200309/model/Layer7Rule.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeListListener response structure.
                */
                class DescribeListListenerResponse : public AbstractModel
                {
                public:
                    DescribeListListenerResponse();
                    ~DescribeListListenerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of layer-4 forwarding listeners
                     * @return Layer4Listeners List of layer-4 forwarding listeners
                     */
                    std::vector<Layer4Rule> GetLayer4Listeners() const;

                    /**
                     * 判断参数 Layer4Listeners 是否已赋值
                     * @return Layer4Listeners 是否已赋值
                     */
                    bool Layer4ListenersHasBeenSet() const;

                    /**
                     * 获取List of layer-7 forwarding listeners
                     * @return Layer7Listeners List of layer-7 forwarding listeners
                     */
                    std::vector<Layer7Rule> GetLayer7Listeners() const;

                    /**
                     * 判断参数 Layer7Listeners 是否已赋值
                     * @return Layer7Listeners 是否已赋值
                     */
                    bool Layer7ListenersHasBeenSet() const;

                private:

                    /**
                     * List of layer-4 forwarding listeners
                     */
                    std::vector<Layer4Rule> m_layer4Listeners;
                    bool m_layer4ListenersHasBeenSet;

                    /**
                     * List of layer-7 forwarding listeners
                     */
                    std::vector<Layer7Rule> m_layer7Listeners;
                    bool m_layer7ListenersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTLISTENERRESPONSE_H_
