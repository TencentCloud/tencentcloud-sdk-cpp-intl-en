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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CREATECOSTOKENREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CREATECOSTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * CreateCosToken request structure.
                */
                class CreateCosTokenRequest : public AbstractModel
                {
                public:
                    CreateCosTokenRequest();
                    ~CreateCosTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param _applicationId Application ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Package name
                     * @return PkgName Package name
                     * 
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置Package name
                     * @param _pkgName Package name
                     * 
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     * 
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取Operation type. 1: upload; 2: query
                     * @return OptType Operation type. 1: upload; 2: query
                     * 
                     */
                    int64_t GetOptType() const;

                    /**
                     * 设置Operation type. 1: upload; 2: query
                     * @param _optType Operation type. 1: upload; 2: query
                     * 
                     */
                    void SetOptType(const int64_t& _optType);

                    /**
                     * 判断参数 OptType 是否已赋值
                     * @return OptType 是否已赋值
                     * 
                     */
                    bool OptTypeHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param _sourceChannel Source channel
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Input parameter of `deployVersion`
                     * @return TimeVersion Input parameter of `deployVersion`
                     * 
                     */
                    std::string GetTimeVersion() const;

                    /**
                     * 设置Input parameter of `deployVersion`
                     * @param _timeVersion Input parameter of `deployVersion`
                     * 
                     */
                    void SetTimeVersion(const std::string& _timeVersion);

                    /**
                     * 判断参数 TimeVersion 是否已赋值
                     * @return TimeVersion 是否已赋值
                     * 
                     */
                    bool TimeVersionHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Package name
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * Operation type. 1: upload; 2: query
                     */
                    int64_t m_optType;
                    bool m_optTypeHasBeenSet;

                    /**
                     * Source channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Input parameter of `deployVersion`
                     */
                    std::string m_timeVersion;
                    bool m_timeVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CREATECOSTOKENREQUEST_H_
