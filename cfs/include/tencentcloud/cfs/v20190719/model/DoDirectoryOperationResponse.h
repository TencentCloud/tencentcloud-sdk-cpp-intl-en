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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DoDirectoryOperation response structure.
                */
                class DoDirectoryOperationResponse : public AbstractModel
                {
                public:
                    DoDirectoryOperationResponse();
                    ~DoDirectoryOperationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取1: success 0: failure. for the create directory operation, 1 indicates successful creation, 0 indicates creation failed. for the confirm directory existence operation, 1 indicates the directory exists, 0 indicates the directory does not exist. in addition, if the directory already exists during the create directory operation, it will also return creation succeeded.
                     * @return Result 1: success 0: failure. for the create directory operation, 1 indicates successful creation, 0 indicates creation failed. for the confirm directory existence operation, 1 indicates the directory exists, 0 indicates the directory does not exist. in addition, if the directory already exists during the create directory operation, it will also return creation succeeded.
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 1: success 0: failure. for the create directory operation, 1 indicates successful creation, 0 indicates creation failed. for the confirm directory existence operation, 1 indicates the directory exists, 0 indicates the directory does not exist. in addition, if the directory already exists during the create directory operation, it will also return creation succeeded.
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONRESPONSE_H_
