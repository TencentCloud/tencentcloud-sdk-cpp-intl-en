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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBESERVICERUNPODLISTV2REQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBESERVICERUNPODLISTV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * DescribeServiceRunPodListV2 request structure.
                */
                class DescribeServiceRunPodListV2Request : public AbstractModel
                {
                public:
                    DescribeServiceRunPodListV2Request();
                    ~DescribeServiceRunPodListV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment ID
                     * @return NamespaceId Environment ID
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Environment ID
                     * @param NamespaceId Environment ID
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取Service name ID
                     * @return ServiceId Service name ID
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service name ID
                     * @param ServiceId Service name ID
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Number of items per page. Default value: 20
                     * @return Limit Number of items per page. Default value: 20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. Default value: 20
                     * @param Limit Number of items per page. Default value: 20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: 0
                     * @return Offset Page number. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: 0
                     * @param Offset Page number. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pod status 
- Running 
- Pending 
- Error
                     * @return Status Pod status 
- Running 
- Pending 
- Error
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Pod status 
- Running 
- Pending 
- Error
                     * @param Status Pod status 
- Running 
- Pending 
- Error
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Pod name
                     * @return PodName Pod name
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name
                     * @param PodName Pod name
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param SourceChannel Source channel
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * Environment ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Service name ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Number of items per page. Default value: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pod status 
- Running 
- Pending 
- Error
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Source channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DESCRIBESERVICERUNPODLISTV2REQUEST_H_
