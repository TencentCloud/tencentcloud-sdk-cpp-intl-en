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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGECHANNELENDPOINTSREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGECHANNELENDPOINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DeleteStreamPackageChannelEndpoints request structure.
                */
                class DeleteStreamPackageChannelEndpointsRequest : public AbstractModel
                {
                public:
                    DeleteStreamPackageChannelEndpointsRequest();
                    ~DeleteStreamPackageChannelEndpointsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return Id Channel ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID
                     * @param _id Channel ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取List of the URLs of the endpoints to delete
                     * @return Urls List of the URLs of the endpoints to delete
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置List of the URLs of the endpoints to delete
                     * @param _urls List of the URLs of the endpoints to delete
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * List of the URLs of the endpoints to delete
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGECHANNELENDPOINTSREQUEST_H_
