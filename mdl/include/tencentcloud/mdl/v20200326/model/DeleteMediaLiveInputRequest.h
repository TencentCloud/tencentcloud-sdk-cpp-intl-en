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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DELETEMEDIALIVEINPUTREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DELETEMEDIALIVEINPUTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DeleteMediaLiveInput request structure.
                */
                class DeleteMediaLiveInputRequest : public AbstractModel
                {
                public:
                    DeleteMediaLiveInputRequest();
                    ~DeleteMediaLiveInputRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Media input ID.
                     * @return Id Media input ID.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Media input ID.
                     * @param Id Media input ID.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Media input ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DELETEMEDIALIVEINPUTREQUEST_H_
