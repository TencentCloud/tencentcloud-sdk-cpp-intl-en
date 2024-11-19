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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGESOURCELOCATIONREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGESOURCELOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/SegmentDeliverInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * CreateStreamPackageSourceLocation request structure.
                */
                class CreateStreamPackageSourceLocationRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageSourceLocationRequest();
                    ~CreateStreamPackageSourceLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SourceLocation name.
                     * @return Name SourceLocation name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置SourceLocation name.
                     * @param _name SourceLocation name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取BaseUrl.
                     * @return BaseUrl BaseUrl.
                     * 
                     */
                    std::string GetBaseUrl() const;

                    /**
                     * 设置BaseUrl.
                     * @param _baseUrl BaseUrl.
                     * 
                     */
                    void SetBaseUrl(const std::string& _baseUrl);

                    /**
                     * 判断参数 BaseUrl 是否已赋值
                     * @return BaseUrl 是否已赋值
                     * 
                     */
                    bool BaseUrlHasBeenSet() const;

                    /**
                     * 获取Whether to enable patching.
                     * @return SegmentDeliverEnable Whether to enable patching.
                     * 
                     */
                    bool GetSegmentDeliverEnable() const;

                    /**
                     * 设置Whether to enable patching.
                     * @param _segmentDeliverEnable Whether to enable patching.
                     * 
                     */
                    void SetSegmentDeliverEnable(const bool& _segmentDeliverEnable);

                    /**
                     * 判断参数 SegmentDeliverEnable 是否已赋值
                     * @return SegmentDeliverEnable 是否已赋值
                     * 
                     */
                    bool SegmentDeliverEnableHasBeenSet() const;

                    /**
                     * 获取Patch configuration.
                     * @return SegmentDeliverConf Patch configuration.
                     * 
                     */
                    SegmentDeliverInfo GetSegmentDeliverConf() const;

                    /**
                     * 设置Patch configuration.
                     * @param _segmentDeliverConf Patch configuration.
                     * 
                     */
                    void SetSegmentDeliverConf(const SegmentDeliverInfo& _segmentDeliverConf);

                    /**
                     * 判断参数 SegmentDeliverConf 是否已赋值
                     * @return SegmentDeliverConf 是否已赋值
                     * 
                     */
                    bool SegmentDeliverConfHasBeenSet() const;

                    /**
                     * 获取Whether to enable package distribution sharding, it is enabled by default.
                     * @return SegmentDeliverUsePackageEnable Whether to enable package distribution sharding, it is enabled by default.
                     * 
                     */
                    bool GetSegmentDeliverUsePackageEnable() const;

                    /**
                     * 设置Whether to enable package distribution sharding, it is enabled by default.
                     * @param _segmentDeliverUsePackageEnable Whether to enable package distribution sharding, it is enabled by default.
                     * 
                     */
                    void SetSegmentDeliverUsePackageEnable(const bool& _segmentDeliverUsePackageEnable);

                    /**
                     * 判断参数 SegmentDeliverUsePackageEnable 是否已赋值
                     * @return SegmentDeliverUsePackageEnable 是否已赋值
                     * 
                     */
                    bool SegmentDeliverUsePackageEnableHasBeenSet() const;

                private:

                    /**
                     * SourceLocation name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * BaseUrl.
                     */
                    std::string m_baseUrl;
                    bool m_baseUrlHasBeenSet;

                    /**
                     * Whether to enable patching.
                     */
                    bool m_segmentDeliverEnable;
                    bool m_segmentDeliverEnableHasBeenSet;

                    /**
                     * Patch configuration.
                     */
                    SegmentDeliverInfo m_segmentDeliverConf;
                    bool m_segmentDeliverConfHasBeenSet;

                    /**
                     * Whether to enable package distribution sharding, it is enabled by default.
                     */
                    bool m_segmentDeliverUsePackageEnable;
                    bool m_segmentDeliverUsePackageEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGESOURCELOCATIONREQUEST_H_
