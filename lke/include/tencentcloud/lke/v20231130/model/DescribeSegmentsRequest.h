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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESEGMENTSREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESEGMENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeSegments request structure.
                */
                class DescribeSegmentsRequest : public AbstractModel
                {
                public:
                    DescribeSegmentsRequest();
                    ~DescribeSegmentsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return BotBizId Application ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID
                     * @param _botBizId Application ID
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Document fragment ID.
                     * @return SegBizId Document fragment ID.
                     * 
                     */
                    std::vector<std::string> GetSegBizId() const;

                    /**
                     * 设置Document fragment ID.
                     * @param _segBizId Document fragment ID.
                     * 
                     */
                    void SetSegBizId(const std::vector<std::string>& _segBizId);

                    /**
                     * 判断参数 SegBizId 是否已赋值
                     * @return SegBizId 是否已赋值
                     * 
                     */
                    bool SegBizIdHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Document fragment ID.
                     */
                    std::vector<std::string> m_segBizId;
                    bool m_segBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESEGMENTSREQUEST_H_
