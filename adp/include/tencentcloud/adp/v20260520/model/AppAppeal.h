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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPAPPEAL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPAPPEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppealingStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Application appeal information (non-modifiable by users)
                */
                class AppAppeal : public AbstractModel
                {
                public:
                    AppAppeal();
                    ~AppAppeal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration items in an appeal
                     * @return AppealingStatus Configuration items in an appeal
                     * 
                     */
                    AppealingStatus GetAppealingStatus() const;

                    /**
                     * 设置Configuration items in an appeal
                     * @param _appealingStatus Configuration items in an appeal
                     * 
                     */
                    void SetAppealingStatus(const AppealingStatus& _appealingStatus);

                    /**
                     * 判断参数 AppealingStatus 是否已赋值
                     * @return AppealingStatus 是否已赋值
                     * 
                     */
                    bool AppealingStatusHasBeenSet() const;

                private:

                    /**
                     * Configuration items in an appeal
                     */
                    AppealingStatus m_appealingStatus;
                    bool m_appealingStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPAPPEAL_H_
