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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_REMOVECONSOLEUSERSRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_REMOVECONSOLEUSERSRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/CommonFailItem.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * to batch removal of console users
                */
                class RemoveConsoleUsersRsp : public AbstractModel
                {
                public:
                    RemoveConsoleUsersRsp();
                    ~RemoveConsoleUsersRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The request has been processed; true even if partially failed. For individual results, refer to SuccessUins/FailItems.</p>
                     * @return Status <p>The request has been processed; true even if partially failed. For individual results, refer to SuccessUins/FailItems.</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>The request has been processed; true even if partially failed. For individual results, refer to SuccessUins/FailItems.</p>
                     * @param _status <p>The request has been processed; true even if partially failed. For individual results, refer to SuccessUins/FailItems.</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>List of successfully deleted User UINs</p>
                     * @return SuccessUins <p>List of successfully deleted User UINs</p>
                     * 
                     */
                    std::vector<std::string> GetSuccessUins() const;

                    /**
                     * 设置<p>List of successfully deleted User UINs</p>
                     * @param _successUins <p>List of successfully deleted User UINs</p>
                     * 
                     */
                    void SetSuccessUins(const std::vector<std::string>& _successUins);

                    /**
                     * 判断参数 SuccessUins 是否已赋值
                     * @return SuccessUins 是否已赋值
                     * 
                     */
                    bool SuccessUinsHasBeenSet() const;

                    /**
                     * 获取<p>List of failed items (Item is the user UIN, and FailReason is the failure reason).</p>
                     * @return FailItems <p>List of failed items (Item is the user UIN, and FailReason is the failure reason).</p>
                     * 
                     */
                    std::vector<CommonFailItem> GetFailItems() const;

                    /**
                     * 设置<p>List of failed items (Item is the user UIN, and FailReason is the failure reason).</p>
                     * @param _failItems <p>List of failed items (Item is the user UIN, and FailReason is the failure reason).</p>
                     * 
                     */
                    void SetFailItems(const std::vector<CommonFailItem>& _failItems);

                    /**
                     * 判断参数 FailItems 是否已赋值
                     * @return FailItems 是否已赋值
                     * 
                     */
                    bool FailItemsHasBeenSet() const;

                private:

                    /**
                     * <p>The request has been processed; true even if partially failed. For individual results, refer to SuccessUins/FailItems.</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>List of successfully deleted User UINs</p>
                     */
                    std::vector<std::string> m_successUins;
                    bool m_successUinsHasBeenSet;

                    /**
                     * <p>List of failed items (Item is the user UIN, and FailReason is the failure reason).</p>
                     */
                    std::vector<CommonFailItem> m_failItems;
                    bool m_failItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_REMOVECONSOLEUSERSRSP_H_
