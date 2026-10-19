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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSACTIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSACTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos command information
                */
                class CosActionInfo : public AbstractModel
                {
                public:
                    CosActionInfo();
                    ~CosActionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Api name
                     * @return ActionName Api name
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置Api name
                     * @param _actionName Api name
                     * 
                     */
                    void SetActionName(const std::string& _actionName);

                    /**
                     * 判断参数 ActionName 是否已赋值
                     * @return ActionName 是否已赋值
                     * 
                     */
                    bool ActionNameHasBeenSet() const;

                    /**
                     * 获取Interface Chinese name
                     * @return ActionNameCn Interface Chinese name
                     * 
                     */
                    std::string GetActionNameCn() const;

                    /**
                     * 设置Interface Chinese name
                     * @param _actionNameCn Interface Chinese name
                     * 
                     */
                    void SetActionNameCn(const std::string& _actionNameCn);

                    /**
                     * 判断参数 ActionNameCn 是否已赋值
                     * @return ActionNameCn 是否已赋值
                     * 
                     */
                    bool ActionNameCnHasBeenSet() const;

                    /**
                     * 获取This API is used to describe APIs.
                     * @return ActionDescription This API is used to describe APIs.
                     * 
                     */
                    std::string GetActionDescription() const;

                    /**
                     * 设置This API is used to describe APIs.
                     * @param _actionDescription This API is used to describe APIs.
                     * 
                     */
                    void SetActionDescription(const std::string& _actionDescription);

                    /**
                     * 判断参数 ActionDescription 是否已赋值
                     * @return ActionDescription 是否已赋值
                     * 
                     */
                    bool ActionDescriptionHasBeenSet() const;

                private:

                    /**
                     * Api name
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * Interface Chinese name
                     */
                    std::string m_actionNameCn;
                    bool m_actionNameCnHasBeenSet;

                    /**
                     * This API is used to describe APIs.
                     */
                    std::string m_actionDescription;
                    bool m_actionDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSACTIONINFO_H_
