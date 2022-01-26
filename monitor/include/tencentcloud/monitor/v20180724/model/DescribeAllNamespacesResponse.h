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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/CommonNamespace.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAllNamespaces response structure.
                */
                class DescribeAllNamespacesResponse : public AbstractModel
                {
                public:
                    DescribeAllNamespacesResponse();
                    ~DescribeAllNamespacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm policy type of Tencent Cloud service (disused)
                     * @return QceNamespaces Alarm policy type of Tencent Cloud service (disused)
                     */
                    CommonNamespace GetQceNamespaces() const;

                    /**
                     * 判断参数 QceNamespaces 是否已赋值
                     * @return QceNamespaces 是否已赋值
                     */
                    bool QceNamespacesHasBeenSet() const;

                    /**
                     * 获取Other alarm policy type (disused)
                     * @return CustomNamespaces Other alarm policy type (disused)
                     */
                    CommonNamespace GetCustomNamespaces() const;

                    /**
                     * 判断参数 CustomNamespaces 是否已赋值
                     * @return CustomNamespaces 是否已赋值
                     */
                    bool CustomNamespacesHasBeenSet() const;

                    /**
                     * 获取Alarm policy type of Tencent Cloud service
                     * @return QceNamespacesNew Alarm policy type of Tencent Cloud service
                     */
                    std::vector<CommonNamespace> GetQceNamespacesNew() const;

                    /**
                     * 判断参数 QceNamespacesNew 是否已赋值
                     * @return QceNamespacesNew 是否已赋值
                     */
                    bool QceNamespacesNewHasBeenSet() const;

                    /**
                     * 获取Other alarm policy type (not supported currently)
                     * @return CustomNamespacesNew Other alarm policy type (not supported currently)
                     */
                    std::vector<CommonNamespace> GetCustomNamespacesNew() const;

                    /**
                     * 判断参数 CustomNamespacesNew 是否已赋值
                     * @return CustomNamespacesNew 是否已赋值
                     */
                    bool CustomNamespacesNewHasBeenSet() const;

                private:

                    /**
                     * Alarm policy type of Tencent Cloud service (disused)
                     */
                    CommonNamespace m_qceNamespaces;
                    bool m_qceNamespacesHasBeenSet;

                    /**
                     * Other alarm policy type (disused)
                     */
                    CommonNamespace m_customNamespaces;
                    bool m_customNamespacesHasBeenSet;

                    /**
                     * Alarm policy type of Tencent Cloud service
                     */
                    std::vector<CommonNamespace> m_qceNamespacesNew;
                    bool m_qceNamespacesNewHasBeenSet;

                    /**
                     * Other alarm policy type (not supported currently)
                     */
                    std::vector<CommonNamespace> m_customNamespacesNew;
                    bool m_customNamespacesNewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESRESPONSE_H_
