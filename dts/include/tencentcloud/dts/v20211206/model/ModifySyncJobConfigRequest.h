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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCJOBCONFIGREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCJOBCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Objects.h>
#include <tencentcloud/dts/v20211206/model/DynamicOptions.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifySyncJobConfig request structure.
                */
                class ModifySyncJobConfigRequest : public AbstractModel
                {
                public:
                    ModifySyncJobConfigRequest();
                    ~ModifySyncJobConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sync task ID
                     * @return JobId Sync task ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Sync task ID
                     * @param _jobId Sync task ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取The modified sync objects
                     * @return DynamicObjects The modified sync objects
                     * 
                     */
                    Objects GetDynamicObjects() const;

                    /**
                     * 设置The modified sync objects
                     * @param _dynamicObjects The modified sync objects
                     * 
                     */
                    void SetDynamicObjects(const Objects& _dynamicObjects);

                    /**
                     * 判断参数 DynamicObjects 是否已赋值
                     * @return DynamicObjects 是否已赋值
                     * 
                     */
                    bool DynamicObjectsHasBeenSet() const;

                    /**
                     * 获取The modified sync task options
                     * @return DynamicOptions The modified sync task options
                     * 
                     */
                    DynamicOptions GetDynamicOptions() const;

                    /**
                     * 设置The modified sync task options
                     * @param _dynamicOptions The modified sync task options
                     * 
                     */
                    void SetDynamicOptions(const DynamicOptions& _dynamicOptions);

                    /**
                     * 判断参数 DynamicOptions 是否已赋值
                     * @return DynamicOptions 是否已赋值
                     * 
                     */
                    bool DynamicOptionsHasBeenSet() const;

                private:

                    /**
                     * Sync task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * The modified sync objects
                     */
                    Objects m_dynamicObjects;
                    bool m_dynamicObjectsHasBeenSet;

                    /**
                     * The modified sync task options
                     */
                    DynamicOptions m_dynamicOptions;
                    bool m_dynamicOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCJOBCONFIGREQUEST_H_
