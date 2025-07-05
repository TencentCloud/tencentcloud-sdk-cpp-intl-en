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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPICEXTENDINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPICEXTENDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AnonymousInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 
                */
                class TopicExtendInfo : public AbstractModel
                {
                public:
                    TopicExtendInfo();
                    ~TopicExtendInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return AnonymousAccess 
                     * 
                     */
                    AnonymousInfo GetAnonymousAccess() const;

                    /**
                     * 设置
                     * @param _anonymousAccess 
                     * 
                     */
                    void SetAnonymousAccess(const AnonymousInfo& _anonymousAccess);

                    /**
                     * 判断参数 AnonymousAccess 是否已赋值
                     * @return AnonymousAccess 是否已赋值
                     * 
                     */
                    bool AnonymousAccessHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    AnonymousInfo m_anonymousAccess;
                    bool m_anonymousAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICEXTENDINFO_H_
