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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ISP_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ISP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ISP information
                */
                class ISP : public AbstractModel
                {
                public:
                    ISP();
                    ~ISP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ISP ID
                     * @return ISPId ISP ID
                     * 
                     */
                    std::string GetISPId() const;

                    /**
                     * 设置ISP ID
                     * @param _iSPId ISP ID
                     * 
                     */
                    void SetISPId(const std::string& _iSPId);

                    /**
                     * 判断参数 ISPId 是否已赋值
                     * @return ISPId 是否已赋值
                     * 
                     */
                    bool ISPIdHasBeenSet() const;

                    /**
                     * 获取ISP name
                     * @return ISPName ISP name
                     * 
                     */
                    std::string GetISPName() const;

                    /**
                     * 设置ISP name
                     * @param _iSPName ISP name
                     * 
                     */
                    void SetISPName(const std::string& _iSPName);

                    /**
                     * 判断参数 ISPName 是否已赋值
                     * @return ISPName 是否已赋值
                     * 
                     */
                    bool ISPNameHasBeenSet() const;

                private:

                    /**
                     * ISP ID
                     */
                    std::string m_iSPId;
                    bool m_iSPIdHasBeenSet;

                    /**
                     * ISP name
                     */
                    std::string m_iSPName;
                    bool m_iSPNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ISP_H_
