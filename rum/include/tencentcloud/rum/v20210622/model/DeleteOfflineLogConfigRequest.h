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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETEOFFLINELOGCONFIGREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETEOFFLINELOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DeleteOfflineLogConfig request structure.
                */
                class DeleteOfflineLogConfigRequest : public AbstractModel
                {
                public:
                    DeleteOfflineLogConfigRequest();
                    ~DeleteOfflineLogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique project key for reporting
                     * @return ProjectKey Unique project key for reporting
                     * 
                     */
                    std::string GetProjectKey() const;

                    /**
                     * 设置Unique project key for reporting
                     * @param _projectKey Unique project key for reporting
                     * 
                     */
                    void SetProjectKey(const std::string& _projectKey);

                    /**
                     * 判断参数 ProjectKey 是否已赋值
                     * @return ProjectKey 是否已赋值
                     * 
                     */
                    bool ProjectKeyHasBeenSet() const;

                    /**
                     * 获取Unique user identifier (uin or aid)
                     * @return UniqueID Unique user identifier (uin or aid)
                     * 
                     */
                    std::string GetUniqueID() const;

                    /**
                     * 设置Unique user identifier (uin or aid)
                     * @param _uniqueID Unique user identifier (uin or aid)
                     * 
                     */
                    void SetUniqueID(const std::string& _uniqueID);

                    /**
                     * 判断参数 UniqueID 是否已赋值
                     * @return UniqueID 是否已赋值
                     * 
                     */
                    bool UniqueIDHasBeenSet() const;

                private:

                    /**
                     * Unique project key for reporting
                     */
                    std::string m_projectKey;
                    bool m_projectKeyHasBeenSet;

                    /**
                     * Unique user identifier (uin or aid)
                     */
                    std::string m_uniqueID;
                    bool m_uniqueIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETEOFFLINELOGCONFIGREQUEST_H_
