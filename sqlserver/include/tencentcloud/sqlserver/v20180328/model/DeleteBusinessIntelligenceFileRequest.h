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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEBUSINESSINTELLIGENCEFILEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEBUSINESSINTELLIGENCEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DeleteBusinessIntelligenceFile request structure.
                */
                class DeleteBusinessIntelligenceFileRequest : public AbstractModel
                {
                public:
                    DeleteBusinessIntelligenceFileRequest();
                    ~DeleteBusinessIntelligenceFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取File name set
                     * @return FileNameSet File name set
                     */
                    std::vector<std::string> GetFileNameSet() const;

                    /**
                     * 设置File name set
                     * @param FileNameSet File name set
                     */
                    void SetFileNameSet(const std::vector<std::string>& _fileNameSet);

                    /**
                     * 判断参数 FileNameSet 是否已赋值
                     * @return FileNameSet 是否已赋值
                     */
                    bool FileNameSetHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * File name set
                     */
                    std::vector<std::string> m_fileNameSet;
                    bool m_fileNameSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEBUSINESSINTELLIGENCEFILEREQUEST_H_
