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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_FORWARDTKEEDGEAPPLICATIONREQUESTV3REQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_FORWARDTKEEDGEAPPLICATIONREQUESTV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ForwardTKEEdgeApplicationRequestV3 request structure.
                */
                class ForwardTKEEdgeApplicationRequestV3Request : public AbstractModel
                {
                public:
                    ForwardTKEEdgeApplicationRequestV3Request();
                    ~ForwardTKEEdgeApplicationRequestV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Access to request the cluster add-on
                     * @return Method Access to request the cluster add-on
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Access to request the cluster add-on
                     * @param _method Access to request the cluster add-on
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Path to request the cluster add-on
                     * @return Path Path to request the cluster add-on
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path to request the cluster add-on
                     * @param _path Path to request the cluster add-on
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Data format allowed to receive the requested cluster add-on
                     * @return Accept Data format allowed to receive the requested cluster add-on
                     * 
                     */
                    std::string GetAccept() const;

                    /**
                     * 设置Data format allowed to receive the requested cluster add-on
                     * @param _accept Data format allowed to receive the requested cluster add-on
                     * 
                     */
                    void SetAccept(const std::string& _accept);

                    /**
                     * 判断参数 Accept 是否已赋值
                     * @return Accept 是否已赋值
                     * 
                     */
                    bool AcceptHasBeenSet() const;

                    /**
                     * 获取Data format for requesting the cluster add-on
                     * @return ContentType Data format for requesting the cluster add-on
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置Data format for requesting the cluster add-on
                     * @param _contentType Data format for requesting the cluster add-on
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取Data sent to request the cluster add-on
                     * @return RequestBody Data sent to request the cluster add-on
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 设置Data sent to request the cluster add-on
                     * @param _requestBody Data sent to request the cluster add-on
                     * 
                     */
                    void SetRequestBody(const std::string& _requestBody);

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                    /**
                     * 获取Cluster name (for example, `cls-1234abcd`)
                     * @return ClusterName Cluster name (for example, `cls-1234abcd`)
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name (for example, `cls-1234abcd`)
                     * @param _clusterName Cluster name (for example, `cls-1234abcd`)
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Whether to encode the request content
                     * @return EncodedBody Whether to encode the request content
                     * 
                     */
                    std::string GetEncodedBody() const;

                    /**
                     * 设置Whether to encode the request content
                     * @param _encodedBody Whether to encode the request content
                     * 
                     */
                    void SetEncodedBody(const std::string& _encodedBody);

                    /**
                     * 判断参数 EncodedBody 是否已赋值
                     * @return EncodedBody 是否已赋值
                     * 
                     */
                    bool EncodedBodyHasBeenSet() const;

                private:

                    /**
                     * Access to request the cluster add-on
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Path to request the cluster add-on
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Data format allowed to receive the requested cluster add-on
                     */
                    std::string m_accept;
                    bool m_acceptHasBeenSet;

                    /**
                     * Data format for requesting the cluster add-on
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * Data sent to request the cluster add-on
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                    /**
                     * Cluster name (for example, `cls-1234abcd`)
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Whether to encode the request content
                     */
                    std::string m_encodedBody;
                    bool m_encodedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_FORWARDTKEEDGEAPPLICATIONREQUESTV3REQUEST_H_
